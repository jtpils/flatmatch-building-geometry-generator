#ifndef POLYGONWITHHOLES_H
#define POLYGONWITHHOLES_H

#include "osmtypes.h"
#include <list>
#include <string>

class PolygonWithHoles
{
public:
    PolygonWithHoles( );
    PolygonWithHoles( const PointList &outer, const list<PointList> &holes, const Tags &tags );

    static PolygonWithHoles fromOsmRelation(const OsmRelation &rel);
    string edgesToJson() const;
private:
    PointList outer;
    list<PointList> holes;
public: //made public just for debugging
    Tags tags;
};

#endif // POLYGONWITHHOLES_H
