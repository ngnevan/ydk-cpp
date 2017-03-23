
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_cfg {

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::Priority()
    :
    level{YType::enumeration, "level"},
    priority_value{YType::uint32, "priority-value"}
{
    yang_name = "priority"; yang_parent_name = "priorities";
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::~Priority()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_data() const
{
    return level.is_set
	|| priority_value.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(priority_value.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPasswords()
{
    yang_name = "hello-accept-passwords"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::~HelloAcceptPasswords()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::has_data() const
{
    for (std::size_t index=0; index<hello_accept_password.size(); index++)
    {
        if(hello_accept_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::has_operation() const
{
    for (std::size_t index=0; index<hello_accept_password.size(); index++)
    {
        if(hello_accept_password[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-accept-passwords";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloAcceptPasswords' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-accept-password")
    {
        for(auto const & c : hello_accept_password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword>();
        c->parent = this;
        hello_accept_password.push_back(std::move(c));
        children[segment_path] = hello_accept_password.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::get_children()
{
    for (auto const & c : hello_accept_password)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::HelloAcceptPassword()
    :
    level{YType::enumeration, "level"},
    password{YType::str, "password"}
{
    yang_name = "hello-accept-password"; yang_parent_name = "hello-accept-passwords";
}

Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::~HelloAcceptPassword()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::has_data() const
{
    return level.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(password.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-accept-password" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloAcceptPassword' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloAcceptPasswords::HelloAcceptPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPasswords()
{
    yang_name = "hello-passwords"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::~HelloPasswords()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::has_data() const
{
    for (std::size_t index=0; index<hello_password.size(); index++)
    {
        if(hello_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::has_operation() const
{
    for (std::size_t index=0; index<hello_password.size(); index++)
    {
        if(hello_password[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-passwords";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloPasswords' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-password")
    {
        for(auto const & c : hello_password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword>();
        c->parent = this;
        hello_password.push_back(std::move(c));
        children[segment_path] = hello_password.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::get_children()
{
    for (auto const & c : hello_password)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::HelloPassword()
    :
    level{YType::enumeration, "level"},
    algorithm{YType::enumeration, "algorithm"},
    failure_mode{YType::enumeration, "failure-mode"},
    password{YType::str, "password"}
{
    yang_name = "hello-password"; yang_parent_name = "hello-passwords";
}

Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::~HelloPassword()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::has_data() const
{
    return level.is_set
	|| algorithm.is_set
	|| failure_mode.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(algorithm.operation)
	|| is_set(failure_mode.operation)
	|| is_set(password.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-password" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloPassword' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (failure_mode.is_set || is_set(failure_mode.operation)) leaf_name_data.push_back(failure_mode.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPasswords::HelloPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "failure-mode")
    {
        failure_mode = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPaddings()
{
    yang_name = "hello-paddings"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::~HelloPaddings()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::has_data() const
{
    for (std::size_t index=0; index<hello_padding.size(); index++)
    {
        if(hello_padding[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::has_operation() const
{
    for (std::size_t index=0; index<hello_padding.size(); index++)
    {
        if(hello_padding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-paddings";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloPaddings' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-padding")
    {
        for(auto const & c : hello_padding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding>();
        c->parent = this;
        hello_padding.push_back(std::move(c));
        children[segment_path] = hello_padding.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::get_children()
{
    for (auto const & c : hello_padding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::HelloPadding()
    :
    level{YType::enumeration, "level"},
    padding_type{YType::enumeration, "padding-type"}
{
    yang_name = "hello-padding"; yang_parent_name = "hello-paddings";
}

Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::~HelloPadding()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::has_data() const
{
    return level.is_set
	|| padding_type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(padding_type.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-padding" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloPadding' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (padding_type.is_set || is_set(padding_type.operation)) leaf_name_data.push_back(padding_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloPaddings::HelloPadding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "padding-type")
    {
        padding_type = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultipliers()
{
    yang_name = "hello-multipliers"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::~HelloMultipliers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier.size(); index++)
    {
        if(hello_multiplier[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier.size(); index++)
    {
        if(hello_multiplier[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multipliers";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultipliers' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-multiplier")
    {
        for(auto const & c : hello_multiplier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier>();
        c->parent = this;
        hello_multiplier.push_back(std::move(c));
        children[segment_path] = hello_multiplier.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::get_children()
{
    for (auto const & c : hello_multiplier)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::HelloMultiplier()
    :
    level{YType::enumeration, "level"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "hello-multiplier"; yang_parent_name = "hello-multipliers";
}

Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::~HelloMultiplier()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::has_data() const
{
    return level.is_set
	|| multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(multiplier.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplier' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloMultipliers::HelloMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThresholds()
{
    yang_name = "lsp-fast-flood-thresholds"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::~LspFastFloodThresholds()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_data() const
{
    for (std::size_t index=0; index<lsp_fast_flood_threshold.size(); index++)
    {
        if(lsp_fast_flood_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_operation() const
{
    for (std::size_t index=0; index<lsp_fast_flood_threshold.size(); index++)
    {
        if(lsp_fast_flood_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fast-flood-thresholds";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFastFloodThresholds' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-fast-flood-threshold")
    {
        for(auto const & c : lsp_fast_flood_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold>();
        c->parent = this;
        lsp_fast_flood_threshold.push_back(std::move(c));
        children[segment_path] = lsp_fast_flood_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_children()
{
    for (auto const & c : lsp_fast_flood_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::LspFastFloodThreshold()
    :
    level{YType::enumeration, "level"},
    count{YType::uint32, "count"}
{
    yang_name = "lsp-fast-flood-threshold"; yang_parent_name = "lsp-fast-flood-thresholds";
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::~LspFastFloodThreshold()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_data() const
{
    return level.is_set
	|| count.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(count.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fast-flood-threshold" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFastFloodThreshold' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "count")
    {
        count = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClears()
{
    yang_name = "prefix-attribute-n-flag-clears"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::~PrefixAttributeNFlagClears()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_data() const
{
    for (std::size_t index=0; index<prefix_attribute_n_flag_clear.size(); index++)
    {
        if(prefix_attribute_n_flag_clear[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_operation() const
{
    for (std::size_t index=0; index<prefix_attribute_n_flag_clear.size(); index++)
    {
        if(prefix_attribute_n_flag_clear[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-attribute-n-flag-clears";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixAttributeNFlagClears' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-attribute-n-flag-clear")
    {
        for(auto const & c : prefix_attribute_n_flag_clear)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear>();
        c->parent = this;
        prefix_attribute_n_flag_clear.push_back(std::move(c));
        children[segment_path] = prefix_attribute_n_flag_clear.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_children()
{
    for (auto const & c : prefix_attribute_n_flag_clear)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::PrefixAttributeNFlagClear()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "prefix-attribute-n-flag-clear"; yang_parent_name = "prefix-attribute-n-flag-clears";
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::~PrefixAttributeNFlagClear()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-attribute-n-flag-clear" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixAttributeNFlagClear' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloIntervals()
{
    yang_name = "hello-intervals"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::~HelloIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::has_data() const
{
    for (std::size_t index=0; index<hello_interval.size(); index++)
    {
        if(hello_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::has_operation() const
{
    for (std::size_t index=0; index<hello_interval.size(); index++)
    {
        if(hello_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-interval")
    {
        for(auto const & c : hello_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval>();
        c->parent = this;
        hello_interval.push_back(std::move(c));
        children[segment_path] = hello_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::get_children()
{
    for (auto const & c : hello_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::HelloInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "hello-interval"; yang_parent_name = "hello-intervals";
}

Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::~HelloInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::HelloIntervals::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAfs()
{
    yang_name = "interface-afs"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::~InterfaceAfs()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::has_data() const
{
    for (std::size_t index=0; index<interface_af.size(); index++)
    {
        if(interface_af[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::has_operation() const
{
    for (std::size_t index=0; index<interface_af.size(); index++)
    {
        if(interface_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-afs";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAfs' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-af")
    {
        for(auto const & c : interface_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf>();
        c->parent = this;
        interface_af.push_back(std::move(c));
        children[segment_path] = interface_af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::get_children()
{
    for (auto const & c : interface_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAf()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
    	,
    interface_af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData>())
{
    interface_af_data->parent = this;
    children["interface-af-data"] = interface_af_data;

    yang_name = "interface-af"; yang_parent_name = "interface-afs";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::~InterfaceAf()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::has_data() const
{
    for (std::size_t index=0; index<topology_name.size(); index++)
    {
        if(topology_name[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| saf_name.is_set
	|| (interface_af_data !=  nullptr && interface_af_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::has_operation() const
{
    for (std::size_t index=0; index<topology_name.size(); index++)
    {
        if(topology_name[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| (interface_af_data !=  nullptr && interface_af_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAf' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-af-data")
    {
        if(interface_af_data != nullptr)
        {
            children["interface-af-data"] = interface_af_data;
        }
        else
        {
            interface_af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData>();
            interface_af_data->parent = this;
            children["interface-af-data"] = interface_af_data;
        }
        return children.at("interface-af-data");
    }

    if(child_yang_name == "topology-name")
    {
        for(auto const & c : topology_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName>();
        c->parent = this;
        topology_name.push_back(std::move(c));
        children[segment_path] = topology_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::get_children()
{
    if(children.find("interface-af-data") == children.end())
    {
        if(interface_af_data != nullptr)
        {
            children["interface-af-data"] = interface_af_data;
        }
    }

    for (auto const & c : topology_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceAfData()
    :
    interface_af_state{YType::enumeration, "interface-af-state"},
    running{YType::empty, "running"}
    	,
    admin_tags(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags>())
	,auto_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics>())
	,interface_frr_table(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable>())
	,interface_link_group(nullptr) // presence node
	,metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics>())
	,mpls_ldp(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp>())
	,prefix_sid(nullptr) // presence node
	,prefix_sspfsid(nullptr) // presence node
	,weights(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights>())
{
    admin_tags->parent = this;
    children["admin-tags"] = admin_tags;

    auto_metrics->parent = this;
    children["auto-metrics"] = auto_metrics;

    interface_frr_table->parent = this;
    children["interface-frr-table"] = interface_frr_table;

    metrics->parent = this;
    children["metrics"] = metrics;

    mpls_ldp->parent = this;
    children["mpls-ldp"] = mpls_ldp;

    weights->parent = this;
    children["weights"] = weights;

    yang_name = "interface-af-data"; yang_parent_name = "interface-af";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::~InterfaceAfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::has_data() const
{
    return interface_af_state.is_set
	|| running.is_set
	|| (admin_tags !=  nullptr && admin_tags->has_data())
	|| (auto_metrics !=  nullptr && auto_metrics->has_data())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_data())
	|| (interface_link_group !=  nullptr && interface_link_group->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_af_state.operation)
	|| is_set(running.operation)
	|| (admin_tags !=  nullptr && admin_tags->has_operation())
	|| (auto_metrics !=  nullptr && auto_metrics->has_operation())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_operation())
	|| (interface_link_group !=  nullptr && interface_link_group->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-af-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAfData' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_af_state.is_set || is_set(interface_af_state.operation)) leaf_name_data.push_back(interface_af_state.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-tags")
    {
        if(admin_tags != nullptr)
        {
            children["admin-tags"] = admin_tags;
        }
        else
        {
            admin_tags = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags>();
            admin_tags->parent = this;
            children["admin-tags"] = admin_tags;
        }
        return children.at("admin-tags");
    }

    if(child_yang_name == "auto-metrics")
    {
        if(auto_metrics != nullptr)
        {
            children["auto-metrics"] = auto_metrics;
        }
        else
        {
            auto_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics>();
            auto_metrics->parent = this;
            children["auto-metrics"] = auto_metrics;
        }
        return children.at("auto-metrics");
    }

    if(child_yang_name == "interface-frr-table")
    {
        if(interface_frr_table != nullptr)
        {
            children["interface-frr-table"] = interface_frr_table;
        }
        else
        {
            interface_frr_table = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable>();
            interface_frr_table->parent = this;
            children["interface-frr-table"] = interface_frr_table;
        }
        return children.at("interface-frr-table");
    }

    if(child_yang_name == "interface-link-group")
    {
        if(interface_link_group != nullptr)
        {
            children["interface-link-group"] = interface_link_group;
        }
        else
        {
            interface_link_group = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup>();
            interface_link_group->parent = this;
            children["interface-link-group"] = interface_link_group;
        }
        return children.at("interface-link-group");
    }

    if(child_yang_name == "metrics")
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
        else
        {
            metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics>();
            metrics->parent = this;
            children["metrics"] = metrics;
        }
        return children.at("metrics");
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp != nullptr)
        {
            children["mpls-ldp"] = mpls_ldp;
        }
        else
        {
            mpls_ldp = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp>();
            mpls_ldp->parent = this;
            children["mpls-ldp"] = mpls_ldp;
        }
        return children.at("mpls-ldp");
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
        else
        {
            prefix_sid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid>();
            prefix_sid->parent = this;
            children["prefix-sid"] = prefix_sid;
        }
        return children.at("prefix-sid");
    }

    if(child_yang_name == "prefix-sspfsid")
    {
        if(prefix_sspfsid != nullptr)
        {
            children["prefix-sspfsid"] = prefix_sspfsid;
        }
        else
        {
            prefix_sspfsid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid>();
            prefix_sspfsid->parent = this;
            children["prefix-sspfsid"] = prefix_sspfsid;
        }
        return children.at("prefix-sspfsid");
    }

    if(child_yang_name == "weights")
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
        else
        {
            weights = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights>();
            weights->parent = this;
            children["weights"] = weights;
        }
        return children.at("weights");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::get_children()
{
    if(children.find("admin-tags") == children.end())
    {
        if(admin_tags != nullptr)
        {
            children["admin-tags"] = admin_tags;
        }
    }

    if(children.find("auto-metrics") == children.end())
    {
        if(auto_metrics != nullptr)
        {
            children["auto-metrics"] = auto_metrics;
        }
    }

    if(children.find("interface-frr-table") == children.end())
    {
        if(interface_frr_table != nullptr)
        {
            children["interface-frr-table"] = interface_frr_table;
        }
    }

    if(children.find("interface-link-group") == children.end())
    {
        if(interface_link_group != nullptr)
        {
            children["interface-link-group"] = interface_link_group;
        }
    }

    if(children.find("metrics") == children.end())
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
    }

    if(children.find("mpls-ldp") == children.end())
    {
        if(mpls_ldp != nullptr)
        {
            children["mpls-ldp"] = mpls_ldp;
        }
    }

    if(children.find("prefix-sid") == children.end())
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
    }

    if(children.find("prefix-sspfsid") == children.end())
    {
        if(prefix_sspfsid != nullptr)
        {
            children["prefix-sspfsid"] = prefix_sspfsid;
        }
    }

    if(children.find("weights") == children.end())
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-af-state")
    {
        interface_af_state = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::PrefixSid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "prefix-sid"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::~PrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(nflag_clear.operation)
	|| is_set(php.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSid' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.operation)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.operation)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
    }
    if(value_path == "php")
    {
        php = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTable()
    :
    frr_exclude_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces>())
	,frr_remote_lfa_max_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>())
	,frr_remote_lfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes>())
	,frr_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes>())
	,frrlfa_candidate_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces>())
	,frrtilfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes>())
	,interface_frr_tiebreaker_defaults(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>())
	,interface_frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers>())
{
    frr_exclude_interfaces->parent = this;
    children["frr-exclude-interfaces"] = frr_exclude_interfaces;

    frr_remote_lfa_max_metrics->parent = this;
    children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;

    frr_remote_lfa_types->parent = this;
    children["frr-remote-lfa-types"] = frr_remote_lfa_types;

    frr_types->parent = this;
    children["frr-types"] = frr_types;

    frrlfa_candidate_interfaces->parent = this;
    children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;

    frrtilfa_types->parent = this;
    children["frrtilfa-types"] = frrtilfa_types;

    interface_frr_tiebreaker_defaults->parent = this;
    children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;

    interface_frr_tiebreakers->parent = this;
    children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;

    yang_name = "interface-frr-table"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::~InterfaceFrrTable()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::has_data() const
{
    return (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_data())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_data())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_data())
	|| (frr_types !=  nullptr && frr_types->has_data())
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_data())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_data())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_data())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::has_operation() const
{
    return is_set(operation)
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_operation())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_operation())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_operation())
	|| (frr_types !=  nullptr && frr_types->has_operation())
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_operation())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_operation())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_operation())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-table";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTable' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-exclude-interfaces")
    {
        if(frr_exclude_interfaces != nullptr)
        {
            children["frr-exclude-interfaces"] = frr_exclude_interfaces;
        }
        else
        {
            frr_exclude_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces>();
            frr_exclude_interfaces->parent = this;
            children["frr-exclude-interfaces"] = frr_exclude_interfaces;
        }
        return children.at("frr-exclude-interfaces");
    }

    if(child_yang_name == "frr-remote-lfa-max-metrics")
    {
        if(frr_remote_lfa_max_metrics != nullptr)
        {
            children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
        }
        else
        {
            frr_remote_lfa_max_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>();
            frr_remote_lfa_max_metrics->parent = this;
            children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
        }
        return children.at("frr-remote-lfa-max-metrics");
    }

    if(child_yang_name == "frr-remote-lfa-types")
    {
        if(frr_remote_lfa_types != nullptr)
        {
            children["frr-remote-lfa-types"] = frr_remote_lfa_types;
        }
        else
        {
            frr_remote_lfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes>();
            frr_remote_lfa_types->parent = this;
            children["frr-remote-lfa-types"] = frr_remote_lfa_types;
        }
        return children.at("frr-remote-lfa-types");
    }

    if(child_yang_name == "frr-types")
    {
        if(frr_types != nullptr)
        {
            children["frr-types"] = frr_types;
        }
        else
        {
            frr_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes>();
            frr_types->parent = this;
            children["frr-types"] = frr_types;
        }
        return children.at("frr-types");
    }

    if(child_yang_name == "frrlfa-candidate-interfaces")
    {
        if(frrlfa_candidate_interfaces != nullptr)
        {
            children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
        }
        else
        {
            frrlfa_candidate_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces>();
            frrlfa_candidate_interfaces->parent = this;
            children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
        }
        return children.at("frrlfa-candidate-interfaces");
    }

    if(child_yang_name == "frrtilfa-types")
    {
        if(frrtilfa_types != nullptr)
        {
            children["frrtilfa-types"] = frrtilfa_types;
        }
        else
        {
            frrtilfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes>();
            frrtilfa_types->parent = this;
            children["frrtilfa-types"] = frrtilfa_types;
        }
        return children.at("frrtilfa-types");
    }

    if(child_yang_name == "interface-frr-tiebreaker-defaults")
    {
        if(interface_frr_tiebreaker_defaults != nullptr)
        {
            children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
        }
        else
        {
            interface_frr_tiebreaker_defaults = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>();
            interface_frr_tiebreaker_defaults->parent = this;
            children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
        }
        return children.at("interface-frr-tiebreaker-defaults");
    }

    if(child_yang_name == "interface-frr-tiebreakers")
    {
        if(interface_frr_tiebreakers != nullptr)
        {
            children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
        }
        else
        {
            interface_frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers>();
            interface_frr_tiebreakers->parent = this;
            children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
        }
        return children.at("interface-frr-tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::get_children()
{
    if(children.find("frr-exclude-interfaces") == children.end())
    {
        if(frr_exclude_interfaces != nullptr)
        {
            children["frr-exclude-interfaces"] = frr_exclude_interfaces;
        }
    }

    if(children.find("frr-remote-lfa-max-metrics") == children.end())
    {
        if(frr_remote_lfa_max_metrics != nullptr)
        {
            children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
        }
    }

    if(children.find("frr-remote-lfa-types") == children.end())
    {
        if(frr_remote_lfa_types != nullptr)
        {
            children["frr-remote-lfa-types"] = frr_remote_lfa_types;
        }
    }

    if(children.find("frr-types") == children.end())
    {
        if(frr_types != nullptr)
        {
            children["frr-types"] = frr_types;
        }
    }

    if(children.find("frrlfa-candidate-interfaces") == children.end())
    {
        if(frrlfa_candidate_interfaces != nullptr)
        {
            children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
        }
    }

    if(children.find("frrtilfa-types") == children.end())
    {
        if(frrtilfa_types != nullptr)
        {
            children["frrtilfa-types"] = frrtilfa_types;
        }
    }

    if(children.find("interface-frr-tiebreaker-defaults") == children.end())
    {
        if(interface_frr_tiebreaker_defaults != nullptr)
        {
            children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
        }
    }

    if(children.find("interface-frr-tiebreakers") == children.end())
    {
        if(interface_frr_tiebreakers != nullptr)
        {
            children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterfaces()
{
    yang_name = "frrlfa-candidate-interfaces"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::~FrrlfaCandidateInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrlfaCandidateInterfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frrlfa-candidate-interface")
    {
        for(auto const & c : frrlfa_candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface>();
        c->parent = this;
        frrlfa_candidate_interface.push_back(std::move(c));
        children[segment_path] = frrlfa_candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_children()
{
    for (auto const & c : frrlfa_candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::FrrlfaCandidateInterface()
    :
    frr_type{YType::enumeration, "frr-type"},
    interface_name{YType::str, "interface-name"},
    level{YType::uint32, "level"}
{
    yang_name = "frrlfa-candidate-interface"; yang_parent_name = "frrlfa-candidate-interfaces";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::~FrrlfaCandidateInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_data() const
{
    return frr_type.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interface" <<"[frr-type='" <<frr_type <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrlfaCandidateInterface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetrics()
{
    yang_name = "frr-remote-lfa-max-metrics"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::~FrrRemoteLfaMaxMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.size(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.size(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaMaxMetrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-remote-lfa-max-metric")
    {
        for(auto const & c : frr_remote_lfa_max_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric>();
        c->parent = this;
        frr_remote_lfa_max_metric.push_back(std::move(c));
        children[segment_path] = frr_remote_lfa_max_metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_children()
{
    for (auto const & c : frr_remote_lfa_max_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::FrrRemoteLfaMaxMetric()
    :
    level{YType::enumeration, "level"},
    max_metric{YType::uint32, "max-metric"}
{
    yang_name = "frr-remote-lfa-max-metric"; yang_parent_name = "frr-remote-lfa-max-metrics";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::~FrrRemoteLfaMaxMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_data() const
{
    return level.is_set
	|| max_metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(max_metric.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaMaxMetric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (max_metric.is_set || is_set(max_metric.operation)) leaf_name_data.push_back(max_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "max-metric")
    {
        max_metric = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrTypes()
{
    yang_name = "frr-types"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::~FrrTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_data() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-types";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTypes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-type")
    {
        for(auto const & c : frr_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType>();
        c->parent = this;
        frr_type.push_back(std::move(c));
        children[segment_path] = frr_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_children()
{
    for (auto const & c : frr_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::FrrType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{
    yang_name = "frr-type"; yang_parent_name = "frr-types";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(type.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrType' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaTypes()
{
    yang_name = "frr-remote-lfa-types"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::~FrrRemoteLfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.size(); index++)
    {
        if(frr_remote_lfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.size(); index++)
    {
        if(frr_remote_lfa_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-types";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaTypes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-remote-lfa-type")
    {
        for(auto const & c : frr_remote_lfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType>();
        c->parent = this;
        frr_remote_lfa_type.push_back(std::move(c));
        children[segment_path] = frr_remote_lfa_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::get_children()
{
    for (auto const & c : frr_remote_lfa_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::FrrRemoteLfaType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{
    yang_name = "frr-remote-lfa-type"; yang_parent_name = "frr-remote-lfa-types";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::~FrrRemoteLfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(type.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-type" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaType' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefaults()
{
    yang_name = "interface-frr-tiebreaker-defaults"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::~InterfaceFrrTiebreakerDefaults()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-defaults";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreakerDefaults' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-frr-tiebreaker-default")
    {
        for(auto const & c : interface_frr_tiebreaker_default)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault>();
        c->parent = this;
        interface_frr_tiebreaker_default.push_back(std::move(c));
        children[segment_path] = interface_frr_tiebreaker_default.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_children()
{
    for (auto const & c : interface_frr_tiebreaker_default)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::InterfaceFrrTiebreakerDefault()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "interface-frr-tiebreaker-default"; yang_parent_name = "interface-frr-tiebreaker-defaults";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::~InterfaceFrrTiebreakerDefault()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-default" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreakerDefault' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaTypes()
{
    yang_name = "frrtilfa-types"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::~FrrtilfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_data() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-types";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrtilfaTypes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frrtilfa-type")
    {
        for(auto const & c : frrtilfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType>();
        c->parent = this;
        frrtilfa_type.push_back(std::move(c));
        children[segment_path] = frrtilfa_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_children()
{
    for (auto const & c : frrtilfa_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::FrrtilfaType()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "frrtilfa-type"; yang_parent_name = "frrtilfa-types";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::~FrrtilfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-type" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrtilfaType' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterfaces()
{
    yang_name = "frr-exclude-interfaces"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::~FrrExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<frr_exclude_interface.size(); index++)
    {
        if(frr_exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_exclude_interface.size(); index++)
    {
        if(frr_exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrExcludeInterfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-exclude-interface")
    {
        for(auto const & c : frr_exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface>();
        c->parent = this;
        frr_exclude_interface.push_back(std::move(c));
        children[segment_path] = frr_exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::get_children()
{
    for (auto const & c : frr_exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::FrrExcludeInterface()
    :
    frr_type{YType::enumeration, "frr-type"},
    interface_name{YType::str, "interface-name"},
    level{YType::uint32, "level"}
{
    yang_name = "frr-exclude-interface"; yang_parent_name = "frr-exclude-interfaces";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::~FrrExcludeInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_data() const
{
    return frr_type.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interface" <<"[frr-type='" <<frr_type <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrExcludeInterface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreakers()
{
    yang_name = "interface-frr-tiebreakers"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::~InterfaceFrrTiebreakers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreakers";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreakers' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-frr-tiebreaker")
    {
        for(auto const & c : interface_frr_tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker>();
        c->parent = this;
        interface_frr_tiebreaker.push_back(std::move(c));
        children[segment_path] = interface_frr_tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_children()
{
    for (auto const & c : interface_frr_tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::InterfaceFrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{
    yang_name = "interface-frr-tiebreaker"; yang_parent_name = "interface-frr-tiebreakers";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::~InterfaceFrrTiebreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_data() const
{
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(tiebreaker.operation)
	|| is_set(index_.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker" <<"[level='" <<level <<"']" <<"[tiebreaker='" <<tiebreaker <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreaker' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::MplsLdp()
    :
    sync_level{YType::uint32, "sync-level"}
{
    yang_name = "mpls-ldp"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::~MplsLdp()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_data() const
{
    return sync_level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsLdp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_level.is_set || is_set(sync_level.operation)) leaf_name_data.push_back(sync_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-level")
    {
        sync_level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::PrefixSspfsid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "prefix-sspfsid"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::~PrefixSspfsid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(nflag_clear.operation)
	|| is_set(php.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sspfsid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSspfsid' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.operation)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.operation)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
    }
    if(value_path == "php")
    {
        php = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetrics()
{
    yang_name = "auto-metrics"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::~AutoMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::has_data() const
{
    for (std::size_t index=0; index<auto_metric.size(); index++)
    {
        if(auto_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::has_operation() const
{
    for (std::size_t index=0; index<auto_metric.size(); index++)
    {
        if(auto_metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoMetrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-metric")
    {
        for(auto const & c : auto_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric>();
        c->parent = this;
        auto_metric.push_back(std::move(c));
        children[segment_path] = auto_metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::get_children()
{
    for (auto const & c : auto_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::AutoMetric()
    :
    level{YType::enumeration, "level"},
    proactive_protect{YType::uint32, "proactive-protect"}
{
    yang_name = "auto-metric"; yang_parent_name = "auto-metrics";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::~AutoMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::has_data() const
{
    return level.is_set
	|| proactive_protect.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(proactive_protect.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoMetric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (proactive_protect.is_set || is_set(proactive_protect.operation)) leaf_name_data.push_back(proactive_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AutoMetrics::AutoMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTags()
{
    yang_name = "admin-tags"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::~AdminTags()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::has_data() const
{
    for (std::size_t index=0; index<admin_tag.size(); index++)
    {
        if(admin_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::has_operation() const
{
    for (std::size_t index=0; index<admin_tag.size(); index++)
    {
        if(admin_tag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tags";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminTags' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-tag")
    {
        for(auto const & c : admin_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag>();
        c->parent = this;
        admin_tag.push_back(std::move(c));
        children[segment_path] = admin_tag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::get_children()
{
    for (auto const & c : admin_tag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::AdminTag()
    :
    level{YType::enumeration, "level"},
    admin_tag{YType::uint32, "admin-tag"}
{
    yang_name = "admin-tag"; yang_parent_name = "admin-tags";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::~AdminTag()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::has_data() const
{
    return level.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(admin_tag.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tag" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminTag' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.operation)) leaf_name_data.push_back(admin_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::AdminTags::AdminTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::InterfaceLinkGroup()
    :
    level{YType::uint32, "level"},
    link_group{YType::str, "link-group"}
{
    yang_name = "interface-link-group"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::~InterfaceLinkGroup()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_data() const
{
    return level.is_set
	|| link_group.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(link_group.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-link-group";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceLinkGroup' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (link_group.is_set || is_set(link_group.operation)) leaf_name_data.push_back(link_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "link-group")
    {
        link_group = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metrics()
{
    yang_name = "metrics"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_children()
{
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{
    yang_name = "metric"; yang_parent_name = "metrics";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(metric.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weights()
{
    yang_name = "weights"; yang_parent_name = "interface-af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_data() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weights' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "weight")
    {
        for(auto const & c : weight)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight>();
        c->parent = this;
        weight.push_back(std::move(c));
        children[segment_path] = weight.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_children()
{
    for (auto const & c : weight)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{
    yang_name = "weight"; yang_parent_name = "weights";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_data() const
{
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::TopologyName()
    :
    topology_name{YType::str, "topology-name"},
    interface_af_state{YType::enumeration, "interface-af-state"},
    running{YType::empty, "running"}
    	,
    admin_tags(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags>())
	,auto_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics>())
	,interface_frr_table(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable>())
	,interface_link_group(nullptr) // presence node
	,metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics>())
	,mpls_ldp(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp>())
	,prefix_sid(nullptr) // presence node
	,prefix_sspfsid(nullptr) // presence node
	,weights(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights>())
{
    admin_tags->parent = this;
    children["admin-tags"] = admin_tags;

    auto_metrics->parent = this;
    children["auto-metrics"] = auto_metrics;

    interface_frr_table->parent = this;
    children["interface-frr-table"] = interface_frr_table;

    metrics->parent = this;
    children["metrics"] = metrics;

    mpls_ldp->parent = this;
    children["mpls-ldp"] = mpls_ldp;

    weights->parent = this;
    children["weights"] = weights;

    yang_name = "topology-name"; yang_parent_name = "interface-af";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::~TopologyName()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_data() const
{
    return topology_name.is_set
	|| interface_af_state.is_set
	|| running.is_set
	|| (admin_tags !=  nullptr && admin_tags->has_data())
	|| (auto_metrics !=  nullptr && auto_metrics->has_data())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_data())
	|| (interface_link_group !=  nullptr && interface_link_group->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_name.operation)
	|| is_set(interface_af_state.operation)
	|| is_set(running.operation)
	|| (admin_tags !=  nullptr && admin_tags->has_operation())
	|| (auto_metrics !=  nullptr && auto_metrics->has_operation())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_operation())
	|| (interface_link_group !=  nullptr && interface_link_group->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-name" <<"[topology-name='" <<topology_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyName' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (interface_af_state.is_set || is_set(interface_af_state.operation)) leaf_name_data.push_back(interface_af_state.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-tags")
    {
        if(admin_tags != nullptr)
        {
            children["admin-tags"] = admin_tags;
        }
        else
        {
            admin_tags = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags>();
            admin_tags->parent = this;
            children["admin-tags"] = admin_tags;
        }
        return children.at("admin-tags");
    }

    if(child_yang_name == "auto-metrics")
    {
        if(auto_metrics != nullptr)
        {
            children["auto-metrics"] = auto_metrics;
        }
        else
        {
            auto_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics>();
            auto_metrics->parent = this;
            children["auto-metrics"] = auto_metrics;
        }
        return children.at("auto-metrics");
    }

    if(child_yang_name == "interface-frr-table")
    {
        if(interface_frr_table != nullptr)
        {
            children["interface-frr-table"] = interface_frr_table;
        }
        else
        {
            interface_frr_table = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable>();
            interface_frr_table->parent = this;
            children["interface-frr-table"] = interface_frr_table;
        }
        return children.at("interface-frr-table");
    }

    if(child_yang_name == "interface-link-group")
    {
        if(interface_link_group != nullptr)
        {
            children["interface-link-group"] = interface_link_group;
        }
        else
        {
            interface_link_group = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup>();
            interface_link_group->parent = this;
            children["interface-link-group"] = interface_link_group;
        }
        return children.at("interface-link-group");
    }

    if(child_yang_name == "metrics")
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
        else
        {
            metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics>();
            metrics->parent = this;
            children["metrics"] = metrics;
        }
        return children.at("metrics");
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp != nullptr)
        {
            children["mpls-ldp"] = mpls_ldp;
        }
        else
        {
            mpls_ldp = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp>();
            mpls_ldp->parent = this;
            children["mpls-ldp"] = mpls_ldp;
        }
        return children.at("mpls-ldp");
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
        else
        {
            prefix_sid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid>();
            prefix_sid->parent = this;
            children["prefix-sid"] = prefix_sid;
        }
        return children.at("prefix-sid");
    }

    if(child_yang_name == "prefix-sspfsid")
    {
        if(prefix_sspfsid != nullptr)
        {
            children["prefix-sspfsid"] = prefix_sspfsid;
        }
        else
        {
            prefix_sspfsid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid>();
            prefix_sspfsid->parent = this;
            children["prefix-sspfsid"] = prefix_sspfsid;
        }
        return children.at("prefix-sspfsid");
    }

    if(child_yang_name == "weights")
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
        else
        {
            weights = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights>();
            weights->parent = this;
            children["weights"] = weights;
        }
        return children.at("weights");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_children()
{
    if(children.find("admin-tags") == children.end())
    {
        if(admin_tags != nullptr)
        {
            children["admin-tags"] = admin_tags;
        }
    }

    if(children.find("auto-metrics") == children.end())
    {
        if(auto_metrics != nullptr)
        {
            children["auto-metrics"] = auto_metrics;
        }
    }

    if(children.find("interface-frr-table") == children.end())
    {
        if(interface_frr_table != nullptr)
        {
            children["interface-frr-table"] = interface_frr_table;
        }
    }

    if(children.find("interface-link-group") == children.end())
    {
        if(interface_link_group != nullptr)
        {
            children["interface-link-group"] = interface_link_group;
        }
    }

    if(children.find("metrics") == children.end())
    {
        if(metrics != nullptr)
        {
            children["metrics"] = metrics;
        }
    }

    if(children.find("mpls-ldp") == children.end())
    {
        if(mpls_ldp != nullptr)
        {
            children["mpls-ldp"] = mpls_ldp;
        }
    }

    if(children.find("prefix-sid") == children.end())
    {
        if(prefix_sid != nullptr)
        {
            children["prefix-sid"] = prefix_sid;
        }
    }

    if(children.find("prefix-sspfsid") == children.end())
    {
        if(prefix_sspfsid != nullptr)
        {
            children["prefix-sspfsid"] = prefix_sspfsid;
        }
    }

    if(children.find("weights") == children.end())
    {
        if(weights != nullptr)
        {
            children["weights"] = weights;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "interface-af-state")
    {
        interface_af_state = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::PrefixSid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "prefix-sid"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::~PrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(nflag_clear.operation)
	|| is_set(php.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSid' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.operation)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.operation)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
    }
    if(value_path == "php")
    {
        php = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTable()
    :
    frr_exclude_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces>())
	,frr_remote_lfa_max_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>())
	,frr_remote_lfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes>())
	,frr_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes>())
	,frrlfa_candidate_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces>())
	,frrtilfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes>())
	,interface_frr_tiebreaker_defaults(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>())
	,interface_frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers>())
{
    frr_exclude_interfaces->parent = this;
    children["frr-exclude-interfaces"] = frr_exclude_interfaces;

    frr_remote_lfa_max_metrics->parent = this;
    children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;

    frr_remote_lfa_types->parent = this;
    children["frr-remote-lfa-types"] = frr_remote_lfa_types;

    frr_types->parent = this;
    children["frr-types"] = frr_types;

    frrlfa_candidate_interfaces->parent = this;
    children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;

    frrtilfa_types->parent = this;
    children["frrtilfa-types"] = frrtilfa_types;

    interface_frr_tiebreaker_defaults->parent = this;
    children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;

    interface_frr_tiebreakers->parent = this;
    children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;

    yang_name = "interface-frr-table"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::~InterfaceFrrTable()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_data() const
{
    return (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_data())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_data())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_data())
	|| (frr_types !=  nullptr && frr_types->has_data())
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_data())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_data())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_data())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_operation() const
{
    return is_set(operation)
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_operation())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_operation())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_operation())
	|| (frr_types !=  nullptr && frr_types->has_operation())
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_operation())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_operation())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_operation())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-table";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTable' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-exclude-interfaces")
    {
        if(frr_exclude_interfaces != nullptr)
        {
            children["frr-exclude-interfaces"] = frr_exclude_interfaces;
        }
        else
        {
            frr_exclude_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces>();
            frr_exclude_interfaces->parent = this;
            children["frr-exclude-interfaces"] = frr_exclude_interfaces;
        }
        return children.at("frr-exclude-interfaces");
    }

    if(child_yang_name == "frr-remote-lfa-max-metrics")
    {
        if(frr_remote_lfa_max_metrics != nullptr)
        {
            children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
        }
        else
        {
            frr_remote_lfa_max_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>();
            frr_remote_lfa_max_metrics->parent = this;
            children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
        }
        return children.at("frr-remote-lfa-max-metrics");
    }

    if(child_yang_name == "frr-remote-lfa-types")
    {
        if(frr_remote_lfa_types != nullptr)
        {
            children["frr-remote-lfa-types"] = frr_remote_lfa_types;
        }
        else
        {
            frr_remote_lfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes>();
            frr_remote_lfa_types->parent = this;
            children["frr-remote-lfa-types"] = frr_remote_lfa_types;
        }
        return children.at("frr-remote-lfa-types");
    }

    if(child_yang_name == "frr-types")
    {
        if(frr_types != nullptr)
        {
            children["frr-types"] = frr_types;
        }
        else
        {
            frr_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes>();
            frr_types->parent = this;
            children["frr-types"] = frr_types;
        }
        return children.at("frr-types");
    }

    if(child_yang_name == "frrlfa-candidate-interfaces")
    {
        if(frrlfa_candidate_interfaces != nullptr)
        {
            children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
        }
        else
        {
            frrlfa_candidate_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces>();
            frrlfa_candidate_interfaces->parent = this;
            children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
        }
        return children.at("frrlfa-candidate-interfaces");
    }

    if(child_yang_name == "frrtilfa-types")
    {
        if(frrtilfa_types != nullptr)
        {
            children["frrtilfa-types"] = frrtilfa_types;
        }
        else
        {
            frrtilfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes>();
            frrtilfa_types->parent = this;
            children["frrtilfa-types"] = frrtilfa_types;
        }
        return children.at("frrtilfa-types");
    }

    if(child_yang_name == "interface-frr-tiebreaker-defaults")
    {
        if(interface_frr_tiebreaker_defaults != nullptr)
        {
            children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
        }
        else
        {
            interface_frr_tiebreaker_defaults = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>();
            interface_frr_tiebreaker_defaults->parent = this;
            children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
        }
        return children.at("interface-frr-tiebreaker-defaults");
    }

    if(child_yang_name == "interface-frr-tiebreakers")
    {
        if(interface_frr_tiebreakers != nullptr)
        {
            children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
        }
        else
        {
            interface_frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers>();
            interface_frr_tiebreakers->parent = this;
            children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
        }
        return children.at("interface-frr-tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_children()
{
    if(children.find("frr-exclude-interfaces") == children.end())
    {
        if(frr_exclude_interfaces != nullptr)
        {
            children["frr-exclude-interfaces"] = frr_exclude_interfaces;
        }
    }

    if(children.find("frr-remote-lfa-max-metrics") == children.end())
    {
        if(frr_remote_lfa_max_metrics != nullptr)
        {
            children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
        }
    }

    if(children.find("frr-remote-lfa-types") == children.end())
    {
        if(frr_remote_lfa_types != nullptr)
        {
            children["frr-remote-lfa-types"] = frr_remote_lfa_types;
        }
    }

    if(children.find("frr-types") == children.end())
    {
        if(frr_types != nullptr)
        {
            children["frr-types"] = frr_types;
        }
    }

    if(children.find("frrlfa-candidate-interfaces") == children.end())
    {
        if(frrlfa_candidate_interfaces != nullptr)
        {
            children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
        }
    }

    if(children.find("frrtilfa-types") == children.end())
    {
        if(frrtilfa_types != nullptr)
        {
            children["frrtilfa-types"] = frrtilfa_types;
        }
    }

    if(children.find("interface-frr-tiebreaker-defaults") == children.end())
    {
        if(interface_frr_tiebreaker_defaults != nullptr)
        {
            children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
        }
    }

    if(children.find("interface-frr-tiebreakers") == children.end())
    {
        if(interface_frr_tiebreakers != nullptr)
        {
            children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterfaces()
{
    yang_name = "frrlfa-candidate-interfaces"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::~FrrlfaCandidateInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrlfaCandidateInterfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frrlfa-candidate-interface")
    {
        for(auto const & c : frrlfa_candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface>();
        c->parent = this;
        frrlfa_candidate_interface.push_back(std::move(c));
        children[segment_path] = frrlfa_candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_children()
{
    for (auto const & c : frrlfa_candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::FrrlfaCandidateInterface()
    :
    frr_type{YType::enumeration, "frr-type"},
    interface_name{YType::str, "interface-name"},
    level{YType::uint32, "level"}
{
    yang_name = "frrlfa-candidate-interface"; yang_parent_name = "frrlfa-candidate-interfaces";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::~FrrlfaCandidateInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_data() const
{
    return frr_type.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interface" <<"[frr-type='" <<frr_type <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrlfaCandidateInterface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetrics()
{
    yang_name = "frr-remote-lfa-max-metrics"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::~FrrRemoteLfaMaxMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.size(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.size(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaMaxMetrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-remote-lfa-max-metric")
    {
        for(auto const & c : frr_remote_lfa_max_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric>();
        c->parent = this;
        frr_remote_lfa_max_metric.push_back(std::move(c));
        children[segment_path] = frr_remote_lfa_max_metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_children()
{
    for (auto const & c : frr_remote_lfa_max_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::FrrRemoteLfaMaxMetric()
    :
    level{YType::enumeration, "level"},
    max_metric{YType::uint32, "max-metric"}
{
    yang_name = "frr-remote-lfa-max-metric"; yang_parent_name = "frr-remote-lfa-max-metrics";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::~FrrRemoteLfaMaxMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_data() const
{
    return level.is_set
	|| max_metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(max_metric.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaMaxMetric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (max_metric.is_set || is_set(max_metric.operation)) leaf_name_data.push_back(max_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "max-metric")
    {
        max_metric = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrTypes()
{
    yang_name = "frr-types"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::~FrrTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_data() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-types";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTypes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-type")
    {
        for(auto const & c : frr_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType>();
        c->parent = this;
        frr_type.push_back(std::move(c));
        children[segment_path] = frr_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_children()
{
    for (auto const & c : frr_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::FrrType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{
    yang_name = "frr-type"; yang_parent_name = "frr-types";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(type.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrType' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaTypes()
{
    yang_name = "frr-remote-lfa-types"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::~FrrRemoteLfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.size(); index++)
    {
        if(frr_remote_lfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.size(); index++)
    {
        if(frr_remote_lfa_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-types";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaTypes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-remote-lfa-type")
    {
        for(auto const & c : frr_remote_lfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType>();
        c->parent = this;
        frr_remote_lfa_type.push_back(std::move(c));
        children[segment_path] = frr_remote_lfa_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_children()
{
    for (auto const & c : frr_remote_lfa_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::FrrRemoteLfaType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{
    yang_name = "frr-remote-lfa-type"; yang_parent_name = "frr-remote-lfa-types";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::~FrrRemoteLfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(type.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-type" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrRemoteLfaType' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefaults()
{
    yang_name = "interface-frr-tiebreaker-defaults"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::~InterfaceFrrTiebreakerDefaults()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-defaults";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreakerDefaults' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-frr-tiebreaker-default")
    {
        for(auto const & c : interface_frr_tiebreaker_default)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault>();
        c->parent = this;
        interface_frr_tiebreaker_default.push_back(std::move(c));
        children[segment_path] = interface_frr_tiebreaker_default.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_children()
{
    for (auto const & c : interface_frr_tiebreaker_default)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::InterfaceFrrTiebreakerDefault()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "interface-frr-tiebreaker-default"; yang_parent_name = "interface-frr-tiebreaker-defaults";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::~InterfaceFrrTiebreakerDefault()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-default" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreakerDefault' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaTypes()
{
    yang_name = "frrtilfa-types"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::~FrrtilfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_data() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-types";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrtilfaTypes' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frrtilfa-type")
    {
        for(auto const & c : frrtilfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType>();
        c->parent = this;
        frrtilfa_type.push_back(std::move(c));
        children[segment_path] = frrtilfa_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_children()
{
    for (auto const & c : frrtilfa_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::FrrtilfaType()
    :
    level{YType::enumeration, "level"}
{
    yang_name = "frrtilfa-type"; yang_parent_name = "frrtilfa-types";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::~FrrtilfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-type" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrtilfaType' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterfaces()
{
    yang_name = "frr-exclude-interfaces"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::~FrrExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<frr_exclude_interface.size(); index++)
    {
        if(frr_exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_exclude_interface.size(); index++)
    {
        if(frr_exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrExcludeInterfaces' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-exclude-interface")
    {
        for(auto const & c : frr_exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface>();
        c->parent = this;
        frr_exclude_interface.push_back(std::move(c));
        children[segment_path] = frr_exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_children()
{
    for (auto const & c : frr_exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::FrrExcludeInterface()
    :
    frr_type{YType::enumeration, "frr-type"},
    interface_name{YType::str, "interface-name"},
    level{YType::uint32, "level"}
{
    yang_name = "frr-exclude-interface"; yang_parent_name = "frr-exclude-interfaces";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::~FrrExcludeInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_data() const
{
    return frr_type.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_type.operation)
	|| is_set(interface_name.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interface" <<"[frr-type='" <<frr_type <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrExcludeInterface' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.operation)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreakers()
{
    yang_name = "interface-frr-tiebreakers"; yang_parent_name = "interface-frr-table";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::~InterfaceFrrTiebreakers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreakers";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreakers' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-frr-tiebreaker")
    {
        for(auto const & c : interface_frr_tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker>();
        c->parent = this;
        interface_frr_tiebreaker.push_back(std::move(c));
        children[segment_path] = interface_frr_tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_children()
{
    for (auto const & c : interface_frr_tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::InterfaceFrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{
    yang_name = "interface-frr-tiebreaker"; yang_parent_name = "interface-frr-tiebreakers";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::~InterfaceFrrTiebreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_data() const
{
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(tiebreaker.operation)
	|| is_set(index_.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker" <<"[level='" <<level <<"']" <<"[tiebreaker='" <<tiebreaker <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceFrrTiebreaker' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.operation)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::MplsLdp()
    :
    sync_level{YType::uint32, "sync-level"}
{
    yang_name = "mpls-ldp"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::~MplsLdp()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_data() const
{
    return sync_level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_level.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsLdp' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_level.is_set || is_set(sync_level.operation)) leaf_name_data.push_back(sync_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-level")
    {
        sync_level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::PrefixSspfsid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{
    yang_name = "prefix-sspfsid"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::~PrefixSspfsid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null.operation)
	|| is_set(nflag_clear.operation)
	|| is_set(php.operation)
	|| is_set(type.operation)
	|| is_set(value_.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sspfsid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSspfsid' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.operation)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.operation)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
    }
    if(value_path == "php")
    {
        php = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetrics()
{
    yang_name = "auto-metrics"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::~AutoMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_data() const
{
    for (std::size_t index=0; index<auto_metric.size(); index++)
    {
        if(auto_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_operation() const
{
    for (std::size_t index=0; index<auto_metric.size(); index++)
    {
        if(auto_metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoMetrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-metric")
    {
        for(auto const & c : auto_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric>();
        c->parent = this;
        auto_metric.push_back(std::move(c));
        children[segment_path] = auto_metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_children()
{
    for (auto const & c : auto_metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::AutoMetric()
    :
    level{YType::enumeration, "level"},
    proactive_protect{YType::uint32, "proactive-protect"}
{
    yang_name = "auto-metric"; yang_parent_name = "auto-metrics";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::~AutoMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_data() const
{
    return level.is_set
	|| proactive_protect.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(proactive_protect.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoMetric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (proactive_protect.is_set || is_set(proactive_protect.operation)) leaf_name_data.push_back(proactive_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTags()
{
    yang_name = "admin-tags"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::~AdminTags()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_data() const
{
    for (std::size_t index=0; index<admin_tag.size(); index++)
    {
        if(admin_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_operation() const
{
    for (std::size_t index=0; index<admin_tag.size(); index++)
    {
        if(admin_tag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tags";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminTags' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admin-tag")
    {
        for(auto const & c : admin_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag>();
        c->parent = this;
        admin_tag.push_back(std::move(c));
        children[segment_path] = admin_tag.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_children()
{
    for (auto const & c : admin_tag)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::AdminTag()
    :
    level{YType::enumeration, "level"},
    admin_tag{YType::uint32, "admin-tag"}
{
    yang_name = "admin-tag"; yang_parent_name = "admin-tags";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::~AdminTag()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_data() const
{
    return level.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(admin_tag.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tag" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdminTag' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.operation)) leaf_name_data.push_back(admin_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::InterfaceLinkGroup()
    :
    level{YType::uint32, "level"},
    link_group{YType::str, "link-group"}
{
    yang_name = "interface-link-group"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::~InterfaceLinkGroup()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_data() const
{
    return level.is_set
	|| link_group.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(link_group.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-link-group";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceLinkGroup' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (link_group.is_set || is_set(link_group.operation)) leaf_name_data.push_back(link_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "link-group")
    {
        link_group = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metrics()
{
    yang_name = "metrics"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metrics' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric>();
        c->parent = this;
        metric.push_back(std::move(c));
        children[segment_path] = metric.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_children()
{
    for (auto const & c : metric)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{
    yang_name = "metric"; yang_parent_name = "metrics";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(metric.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weights()
{
    yang_name = "weights"; yang_parent_name = "topology-name";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_data() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weights' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "weight")
    {
        for(auto const & c : weight)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight>();
        c->parent = this;
        weight.push_back(std::move(c));
        children[segment_path] = weight.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_children()
{
    for (auto const & c : weight)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{
    yang_name = "weight"; yang_parent_name = "weights";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_data() const
{
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(weight.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpIntervals()
{
    yang_name = "csnp-intervals"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::~CsnpIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::has_data() const
{
    for (std::size_t index=0; index<csnp_interval.size(); index++)
    {
        if(csnp_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval.size(); index++)
    {
        if(csnp_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csnp-interval")
    {
        for(auto const & c : csnp_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval>();
        c->parent = this;
        csnp_interval.push_back(std::move(c));
        children[segment_path] = csnp_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::get_children()
{
    for (auto const & c : csnp_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::CsnpInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "csnp-interval"; yang_parent_name = "csnp-intervals";
}

Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::~CsnpInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::CsnpIntervals::CsnpInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspIntervals()
{
    yang_name = "lsp-intervals"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::~LspIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_interval.size(); index++)
    {
        if(lsp_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_interval.size(); index++)
    {
        if(lsp_interval[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-intervals";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspIntervals' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-interval")
    {
        for(auto const & c : lsp_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval>();
        c->parent = this;
        lsp_interval.push_back(std::move(c));
        children[segment_path] = lsp_interval.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_children()
{
    for (auto const & c : lsp_interval)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::LspInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{
    yang_name = "lsp-interval"; yang_parent_name = "lsp-intervals";
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::~LspInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(interval.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-interval" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspInterval' in Cisco_IOS_XR_clns_isis_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::MetricEnum::maximum {16777215, "maximum"};

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::MetricEnum::maximum {16777215, "maximum"};


}
}
