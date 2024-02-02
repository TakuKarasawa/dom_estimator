#ifndef DATABASE_H_
#define DATABASE_H_

#include <map>

#include "utils/object_param/object_param.h"
// #include "utils/database/objects.h"
#include "utils/database/object_with_id.h"

namespace dom_estimator
{
// class Database : public std::map<ObjectParam*,Objects*>
class Database : public std::map<ObjectParam*,ObjectWithID*>
{
public:
    Database();

    // add
    // void add_init_object(std::string name,double x,double y);
    // void add_object(std::string name,double x,double y,double time,double credibility);
    void add_init_object(int id,double x,double y);
    void add_observed_object(int id,double x,double y,double time,double credibility,double dom);
    // void add_object(int id,double x,double y,double time,double credibility);
    void add_object(int id,double x,double y,double time,double credibility,double error);

    // update
    void update_objects();
    // void time_update();
    void time_update(double time);
    void update_dom(double time);

    // for debug
    void print_contents();

private:
};
} // namespace dom_estimator

#endif  // DATABASE_H_
