#include "svgdocument.h"
#include "svgdocumentimpl.h"
#include "svgrootelement.h"

namespace lunasvg {

SVGDocument::SVGDocument()
{
    m_impl = new SVGDocumentImpl(this);
}

SVGElement* SVGDocument::getElementById(const std::string& id, int index) const
{
    return m_impl->rootElement()->getElementById(id, index);
}

SVGElement* SVGDocument::getElementByTag(const std::string& tag, int index) const
{
    return m_impl->rootElement()->getElementByTag(tag, index);
}

SVGElement* SVGDocument::insertElement(const SVGElement* element, InsertPosition position)
{
    return m_impl->rootElement()->insertElement(element, position);
}

SVGElement* SVGDocument::appendElement(const SVGElement* element)
{
    return m_impl->rootElement()->appendElement(element);
}

SVGElement* SVGDocument::insertContent(const std::string& content, InsertPosition position)
{
    return m_impl->rootElement()->insertContent(content, position);
}

SVGElement* SVGDocument::appendContent(const std::string& content)
{
    return m_impl->rootElement()->appendContent(content);
}

void SVGDocument::clearContent()
{
    m_impl->rootElement()->clearContent();
}

bool SVGDocument::loadFromFile(const std::string& filename)
{
    return m_impl->loadFromFile(filename);
}

bool SVGDocument::loadFromData(const std::string& content)
{
    return m_impl->loadFromData(content);
}

double SVGDocument::documentWidth(double dpi) const
{
    return m_impl->documentWidth(dpi);
}

double SVGDocument::documentHeight(double dpi) const
{
    return m_impl->documentHeight(dpi);
}

void SVGDocument::render(Bitmap bitmap, double dpi, unsigned int bgColor) const
{
    m_impl->render(bitmap, dpi, bgColor);
}

SVGElement* SVGDocument::rootElement() const
{
    return m_impl->rootElement();
}

std::string SVGDocument::toString() const
{
    return m_impl->rootElement()->toString();
}

bool SVGDocument::hasAnimation() const
{
    return m_impl->hasAnimation();
}

double SVGDocument::animationDuration() const
{
    return m_impl->animationDuration();
}

bool SVGDocument::setCurrentTime(double time, bool seekToTime)
{
    return m_impl->setCurrentTime(time, seekToTime);
}

double SVGDocument::currentTime() const
{
    return m_impl->currentTime();
}

SVGDocument::~SVGDocument()
{
    delete m_impl;
}

} // namespace lunasvg
