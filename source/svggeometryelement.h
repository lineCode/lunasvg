#ifndef SVGGEOMETRYELEMENT_H
#define SVGGEOMETRYELEMENT_H

#include "svggraphicselement.h"
#include "path.h"

namespace lunasvg {

class RenderState;
class Path;

class SVGGeometryElement : public SVGGraphicsElement
{
public:
    SVGGeometryElement(ElementID elementId, SVGDocument* document);
    bool isSVGGeometryElement() const { return true; }
    virtual Rect makePathAndBoundingBox(const RenderState& state, Path& path) const = 0;
    virtual void render(RenderContext& context) const;
};

} // namespace lunasvg

#endif // SVGGEOMETRYELEMENT_H
