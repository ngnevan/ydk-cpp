
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_yang_library.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_yang_library {

ModulesState::ModulesState()
    :
    module_set_id{YType::str, "module-set-id"}
{

    yang_name = "modules-state"; yang_parent_name = "ietf-yang-library"; is_top_level_class = true; has_list_ancestor = false;
}

ModulesState::~ModulesState()
{
}

bool ModulesState::has_data() const
{
    for (std::size_t index=0; index<module.size(); index++)
    {
        if(module[index]->has_data())
            return true;
    }
    return module_set_id.is_set;
}

bool ModulesState::has_operation() const
{
    for (std::size_t index=0; index<module.size(); index++)
    {
        if(module[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(module_set_id.yfilter);
}

std::string ModulesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-yang-library:modules-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModulesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_set_id.is_set || is_set(module_set_id.yfilter)) leaf_name_data.push_back(module_set_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ModulesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module")
    {
        auto c = std::make_shared<ModulesState::Module>();
        c->parent = this;
        module.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModulesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : module)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ModulesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-set-id")
    {
        module_set_id = value;
        module_set_id.value_namespace = name_space;
        module_set_id.value_namespace_prefix = name_space_prefix;
    }
}

void ModulesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-set-id")
    {
        module_set_id.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> ModulesState::clone_ptr() const
{
    return std::make_shared<ModulesState>();
}

std::string ModulesState::get_bundle_yang_models_location() const
{
    return ydk_ietf_models_path;
}

std::string ModulesState::get_bundle_name() const
{
    return "ietf";
}

augment_capabilities_function ModulesState::get_augment_capabilities_function() const
{
    return ietf_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ModulesState::get_namespace_identity_lookup() const
{
    return ietf_namespace_identity_lookup;
}

bool ModulesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module" || name == "module-set-id")
        return true;
    return false;
}

ModulesState::Module::Module()
    :
    name{YType::str, "name"},
    revision{YType::str, "revision"},
    schema{YType::str, "schema"},
    namespace_{YType::str, "namespace"},
    feature{YType::str, "feature"},
    conformance_type{YType::enumeration, "conformance-type"}
{

    yang_name = "module"; yang_parent_name = "modules-state"; is_top_level_class = false; has_list_ancestor = false;
}

ModulesState::Module::~Module()
{
}

bool ModulesState::Module::has_data() const
{
    for (std::size_t index=0; index<deviation.size(); index++)
    {
        if(deviation[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<submodule.size(); index++)
    {
        if(submodule[index]->has_data())
            return true;
    }
    for (auto const & leaf : feature.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| schema.is_set
	|| namespace_.is_set
	|| conformance_type.is_set;
}

bool ModulesState::Module::has_operation() const
{
    for (std::size_t index=0; index<deviation.size(); index++)
    {
        if(deviation[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<submodule.size(); index++)
    {
        if(submodule[index]->has_operation())
            return true;
    }
    for (auto const & leaf : feature.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(schema.yfilter)
	|| ydk::is_set(namespace_.yfilter)
	|| ydk::is_set(feature.yfilter)
	|| ydk::is_set(conformance_type.yfilter);
}

std::string ModulesState::Module::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-yang-library:modules-state/" << get_segment_path();
    return path_buffer.str();
}

std::string ModulesState::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module" <<"[name='" <<name <<"']" <<"[revision='" <<revision <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModulesState::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (schema.is_set || is_set(schema.yfilter)) leaf_name_data.push_back(schema.get_name_leafdata());
    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());
    if (conformance_type.is_set || is_set(conformance_type.yfilter)) leaf_name_data.push_back(conformance_type.get_name_leafdata());

    auto feature_name_datas = feature.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), feature_name_datas.begin(), feature_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> ModulesState::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deviation")
    {
        auto c = std::make_shared<ModulesState::Module::Deviation>();
        c->parent = this;
        deviation.push_back(c);
        return c;
    }

    if(child_yang_name == "submodule")
    {
        auto c = std::make_shared<ModulesState::Module::Submodule>();
        c->parent = this;
        submodule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModulesState::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : deviation)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : submodule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void ModulesState::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schema")
    {
        schema = value;
        schema.value_namespace = name_space;
        schema.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "namespace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "feature")
    {
        feature.append(value);
    }
    if(value_path == "conformance-type")
    {
        conformance_type = value;
        conformance_type.value_namespace = name_space;
        conformance_type.value_namespace_prefix = name_space_prefix;
    }
}

void ModulesState::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "schema")
    {
        schema.yfilter = yfilter;
    }
    if(value_path == "namespace")
    {
        namespace_.yfilter = yfilter;
    }
    if(value_path == "feature")
    {
        feature.yfilter = yfilter;
    }
    if(value_path == "conformance-type")
    {
        conformance_type.yfilter = yfilter;
    }
}

bool ModulesState::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deviation" || name == "submodule" || name == "name" || name == "revision" || name == "schema" || name == "namespace" || name == "feature" || name == "conformance-type")
        return true;
    return false;
}

ModulesState::Module::Deviation::Deviation()
    :
    name{YType::str, "name"},
    revision{YType::str, "revision"}
{

    yang_name = "deviation"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true;
}

ModulesState::Module::Deviation::~Deviation()
{
}

bool ModulesState::Module::Deviation::has_data() const
{
    return name.is_set
	|| revision.is_set;
}

bool ModulesState::Module::Deviation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter);
}

std::string ModulesState::Module::Deviation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deviation" <<"[name='" <<name <<"']" <<"[revision='" <<revision <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModulesState::Module::Deviation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ModulesState::Module::Deviation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModulesState::Module::Deviation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ModulesState::Module::Deviation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void ModulesState::Module::Deviation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool ModulesState::Module::Deviation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "revision")
        return true;
    return false;
}

ModulesState::Module::Submodule::Submodule()
    :
    name{YType::str, "name"},
    revision{YType::str, "revision"},
    schema{YType::str, "schema"}
{

    yang_name = "submodule"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true;
}

ModulesState::Module::Submodule::~Submodule()
{
}

bool ModulesState::Module::Submodule::has_data() const
{
    return name.is_set
	|| revision.is_set
	|| schema.is_set;
}

bool ModulesState::Module::Submodule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(schema.yfilter);
}

std::string ModulesState::Module::Submodule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "submodule" <<"[name='" <<name <<"']" <<"[revision='" <<revision <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ModulesState::Module::Submodule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (schema.is_set || is_set(schema.yfilter)) leaf_name_data.push_back(schema.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ModulesState::Module::Submodule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ModulesState::Module::Submodule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ModulesState::Module::Submodule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schema")
    {
        schema = value;
        schema.value_namespace = name_space;
        schema.value_namespace_prefix = name_space_prefix;
    }
}

void ModulesState::Module::Submodule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "schema")
    {
        schema.yfilter = yfilter;
    }
}

bool ModulesState::Module::Submodule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "revision" || name == "schema")
        return true;
    return false;
}

const Enum::YLeaf ModulesState::Module::ConformanceType::implement {0, "implement"};
const Enum::YLeaf ModulesState::Module::ConformanceType::import {1, "import"};


}
}

