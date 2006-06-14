#include "ModuleParameterGroup.h"

ModuleParameterGroup
::ModuleParameterGroup(const ModuleParameterGroup &parameters)
{
  this->Label = parameters.Label;
  this->Description = parameters.Description;
  this->Parameters = parameters.Parameters;
  this->Advanced = parameters.Advanced;
}

void
ModuleParameterGroup
::operator=(const ModuleParameterGroup &parameters)
{
  this->Label = parameters.Label;
  this->Description = parameters.Description;
  this->Parameters = parameters.Parameters;
  this->Advanced = parameters.Advanced;
}

std::ostream & operator<<(std::ostream &os, const ModuleParameterGroup &group)
{ 
  os << "  Advanced: " << group.GetAdvanced() << std::endl;
  os << "  Label: " << group.GetLabel() << std::endl;
  os << "  Description: " << group.GetDescription() << std::endl;
  os << "  Parameters: " << std::endl;
  std::vector<ModuleParameter>::const_iterator it = group.GetParameters().begin();
  while (it != group.GetParameters().end())
    {
    os << *it;
    ++it;
    }
  return os;
}
