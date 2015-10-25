
#include "../Core/Context.h"
#include "ScriptComponentFile.h"
#include "ScriptComponent.h"

namespace Atomic
{

ScriptComponent::ScriptComponent(Context* context) : Component(context)
{

}

void ScriptComponent::RegisterObject(Context* context)
{
    ACCESSOR_ATTRIBUTE("Is Enabled", IsEnabled, SetEnabled, bool, true, AM_DEFAULT);
    ATTRIBUTE("FieldValues", VariantMap, fieldValues_, Variant::emptyVariantMap, AM_FILE);
}

ScriptComponent::~ScriptComponent()
{

}

}
