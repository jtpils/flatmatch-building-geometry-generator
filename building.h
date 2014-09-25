#ifndef BUILDING_H
#define BUILDING_H

#include <string>

#include "buildingattributes.h"
#include "polygonwithholes.h"
#include "geometry.h"

using namespace std;

typedef list<Vertex3> LineStrip;

class Building
{
public:
    Building();
    Building(PolygonWithHoles layout, BuildingAttributes attributes, string name = "");
    string toJSON() const;
    string getName() const;
private:
    list<LineStrip> getEdges() const;
    list<Triangle> getFaces() const;

    BuildingAttributes attributes;
    PolygonWithHoles   layout;
    string             name;
};

#endif // BUILDING_H