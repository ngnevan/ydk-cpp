
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_qos_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_qos_oper {

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "pir-shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Police()
    :
    policer_type{YType::enumeration, "policer-type"},
    profile_id{YType::uint32, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>())
	,police_config_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>())
{
    cbs->parent = this;
    children["cbs"] = cbs;

    cir->parent = this;
    children["cir"] = cir;

    pbs->parent = this;
    children["pbs"] = pbs;

    pir->parent = this;
    children["pir"] = pir;

    police_config_parameters->parent = this;
    children["police-config-parameters"] = police_config_parameters;

    yang_name = "police"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::has_data() const
{
    return policer_type.is_set
	|| profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_type.operation)
	|| is_set(profile_id.operation)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
        else
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs;
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
        else
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir;
        }
        return children.at("cir");
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
        else
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs;
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
        else
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>();
            pir->parent = this;
            children["pir"] = pir;
        }
        return children.at("pir");
    }

    if(child_yang_name == "police-config-parameters")
    {
        if(police_config_parameters != nullptr)
        {
            children["police-config-parameters"] = police_config_parameters;
        }
        else
        {
            police_config_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>();
            police_config_parameters->parent = this;
            children["police-config-parameters"] = police_config_parameters;
        }
        return children.at("police-config-parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
    }

    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
    }

    if(children.find("police-config-parameters") == children.end())
    {
        if(police_config_parameters != nullptr)
        {
            children["police-config-parameters"] = police_config_parameters;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PoliceConfigParameters()
    :
    average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>())
	,conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>())
	,exceed_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>())
	,peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>())
{
    average_rate->parent = this;
    children["average-rate"] = average_rate;

    conform_burst->parent = this;
    children["conform-burst"] = conform_burst;

    exceed_burst->parent = this;
    children["exceed-burst"] = exceed_burst;

    peak_rate->parent = this;
    children["peak-rate"] = peak_rate;

    yang_name = "police-config-parameters"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::~PoliceConfigParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_data() const
{
    return (average_rate !=  nullptr && average_rate->has_data())
	|| (conform_burst !=  nullptr && conform_burst->has_data())
	|| (exceed_burst !=  nullptr && exceed_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_operation() const
{
    return is_set(operation)
	|| (average_rate !=  nullptr && average_rate->has_operation())
	|| (conform_burst !=  nullptr && conform_burst->has_operation())
	|| (exceed_burst !=  nullptr && exceed_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-config-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceConfigParameters' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "average-rate")
    {
        if(average_rate != nullptr)
        {
            children["average-rate"] = average_rate;
        }
        else
        {
            average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>();
            average_rate->parent = this;
            children["average-rate"] = average_rate;
        }
        return children.at("average-rate");
    }

    if(child_yang_name == "conform-burst")
    {
        if(conform_burst != nullptr)
        {
            children["conform-burst"] = conform_burst;
        }
        else
        {
            conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>();
            conform_burst->parent = this;
            children["conform-burst"] = conform_burst;
        }
        return children.at("conform-burst");
    }

    if(child_yang_name == "exceed-burst")
    {
        if(exceed_burst != nullptr)
        {
            children["exceed-burst"] = exceed_burst;
        }
        else
        {
            exceed_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>();
            exceed_burst->parent = this;
            children["exceed-burst"] = exceed_burst;
        }
        return children.at("exceed-burst");
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate;
        }
        else
        {
            peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>();
            peak_rate->parent = this;
            children["peak-rate"] = peak_rate;
        }
        return children.at("peak-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_children()
{
    if(children.find("average-rate") == children.end())
    {
        if(average_rate != nullptr)
        {
            children["average-rate"] = average_rate;
        }
    }

    if(children.find("conform-burst") == children.end())
    {
        if(conform_burst != nullptr)
        {
            children["conform-burst"] = conform_burst;
        }
    }

    if(children.find("exceed-burst") == children.end())
    {
        if(exceed_burst != nullptr)
        {
            children["exceed-burst"] = exceed_burst;
        }
    }

    if(children.find("peak-rate") == children.end())
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::AverageRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "average-rate"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::~AverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AverageRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::PeakRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "peak-rate"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::~PeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeakRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::ConformBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "conform-burst"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::~ConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformBurst' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::ExceedBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "exceed-burst"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::~ExceedBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedBurst' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Wfq()
    :
    chunk_id{YType::uint32, "chunk-id"},
    committed_weight{YType::uint32, "committed-weight"},
    excess_ratio{YType::uint16, "excess-ratio"},
    excess_weight{YType::uint16, "excess-weight"},
    level{YType::uint8, "level"},
    profile_id{YType::uint32, "profile-id"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>())
	,parent_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth;

    parent_bandwidth->parent = this;
    children["parent-bandwidth"] = parent_bandwidth;

    yang_name = "wfq"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_data() const
{
    return chunk_id.is_set
	|| committed_weight.is_set
	|| excess_ratio.is_set
	|| excess_weight.is_set
	|| level.is_set
	|| profile_id.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(chunk_id.operation)
	|| is_set(committed_weight.operation)
	|| is_set(excess_ratio.operation)
	|| is_set(excess_weight.operation)
	|| is_set(level.operation)
	|| is_set(profile_id.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wfq' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.operation)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (committed_weight.is_set || is_set(committed_weight.operation)) leaf_name_data.push_back(committed_weight.get_name_leafdata());
    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());
    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "parent-bandwidth")
    {
        if(parent_bandwidth != nullptr)
        {
            children["parent-bandwidth"] = parent_bandwidth;
        }
        else
        {
            parent_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>();
            parent_bandwidth->parent = this;
            children["parent-bandwidth"] = parent_bandwidth;
        }
        return children.at("parent-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("parent-bandwidth") == children.end())
    {
        if(parent_bandwidth != nullptr)
        {
            children["parent-bandwidth"] = parent_bandwidth;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
    }
    if(value_path == "committed-weight")
    {
        committed_weight = value;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::ParentBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "parent-bandwidth"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::~ParentBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::Bandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Wred()
    :
    curve_xr{YType::uint16, "curve-xr"},
    type{YType::enumeration, "type"}
{
    yang_name = "wred"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_data() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_data())
            return true;
    }
    return curve_xr.is_set
	|| type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_operation() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(curve_xr.operation)
	|| is_set(type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wred' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curve_xr.is_set || is_set(curve_xr.operation)) leaf_name_data.push_back(curve_xr.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "curve")
    {
        for(auto const & c : curve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve>();
        c->parent = this;
        curve.push_back(std::move(c));
        children[segment_path] = curve.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_children()
{
    for (auto const & c : curve)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "curve-xr")
    {
        curve_xr = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::Curve()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    exp_match{YType::str, "exp-match"},
    match{YType::str, "match"},
    template_id{YType::uint16, "template-id"}
    	,
    max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>())
	,max_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>())
	,min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>())
	,min_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>())
{
    max_threshold->parent = this;
    children["max-threshold"] = max_threshold;

    max_threshold_user_config->parent = this;
    children["max-threshold-user-config"] = max_threshold_user_config;

    min_threshold->parent = this;
    children["min-threshold"] = min_threshold;

    min_threshold_user_config->parent = this;
    children["min-threshold-user-config"] = min_threshold_user_config;

    yang_name = "curve"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::~Curve()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| exp_match.is_set
	|| match.is_set
	|| template_id.is_set
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_index.operation)
	|| is_set(curve_id.operation)
	|| is_set(exp_match.operation)
	|| is_set(match.operation)
	|| is_set(template_id.operation)
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curve";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Curve' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.operation)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.operation)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (exp_match.is_set || is_set(exp_match.operation)) leaf_name_data.push_back(exp_match.get_name_leafdata());
    if (match.is_set || is_set(match.operation)) leaf_name_data.push_back(match.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.operation)) leaf_name_data.push_back(template_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-threshold")
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
        else
        {
            max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>();
            max_threshold->parent = this;
            children["max-threshold"] = max_threshold;
        }
        return children.at("max-threshold");
    }

    if(child_yang_name == "max-threshold-user-config")
    {
        if(max_threshold_user_config != nullptr)
        {
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
        else
        {
            max_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>();
            max_threshold_user_config->parent = this;
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
        return children.at("max-threshold-user-config");
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
        else
        {
            min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>();
            min_threshold->parent = this;
            children["min-threshold"] = min_threshold;
        }
        return children.at("min-threshold");
    }

    if(child_yang_name == "min-threshold-user-config")
    {
        if(min_threshold_user_config != nullptr)
        {
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
        else
        {
            min_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>();
            min_threshold_user_config->parent = this;
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
        return children.at("min-threshold-user-config");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_children()
{
    if(children.find("max-threshold") == children.end())
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
    }

    if(children.find("max-threshold-user-config") == children.end())
    {
        if(max_threshold_user_config != nullptr)
        {
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
    }

    if(children.find("min-threshold") == children.end())
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
    }

    if(children.find("min-threshold-user-config") == children.end())
    {
        if(min_threshold_user_config != nullptr)
        {
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
    }
    if(value_path == "exp-match")
    {
        exp_match = value;
    }
    if(value_path == "match")
    {
        match = value;
    }
    if(value_path == "template-id")
    {
        template_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::~MinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThreshold' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::MinThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold-user-config"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::~MinThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold-user-config";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThresholdUserConfig' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::~MaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThreshold' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::MaxThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold-user-config"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::~MaxThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold-user-config";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThresholdUserConfig' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::Mark()
    :
    child_mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark>())
	,parent_mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark>())
	,parent_police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform>())
	,parent_police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed>())
	,parent_police_violate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed>())
	,police_violate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate>())
{
    child_mark->parent = this;
    children["child-mark"] = child_mark;

    parent_mark->parent = this;
    children["parent-mark"] = parent_mark;

    parent_police_conform->parent = this;
    children["parent-police-conform"] = parent_police_conform;

    parent_police_exceed->parent = this;
    children["parent-police-exceed"] = parent_police_exceed;

    parent_police_violate->parent = this;
    children["parent-police-violate"] = parent_police_violate;

    police_conform->parent = this;
    children["police-conform"] = police_conform;

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed;

    police_violate->parent = this;
    children["police-violate"] = police_violate;

    yang_name = "mark"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_data() const
{
    return (child_mark !=  nullptr && child_mark->has_data())
	|| (parent_mark !=  nullptr && parent_mark->has_data())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_data())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_data())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data())
	|| (police_violate !=  nullptr && police_violate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_operation() const
{
    return is_set(operation)
	|| (child_mark !=  nullptr && child_mark->has_operation())
	|| (parent_mark !=  nullptr && parent_mark->has_operation())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_operation())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_operation())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation())
	|| (police_violate !=  nullptr && police_violate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "child-mark")
    {
        if(child_mark != nullptr)
        {
            children["child-mark"] = child_mark;
        }
        else
        {
            child_mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark>();
            child_mark->parent = this;
            children["child-mark"] = child_mark;
        }
        return children.at("child-mark");
    }

    if(child_yang_name == "parent-mark")
    {
        if(parent_mark != nullptr)
        {
            children["parent-mark"] = parent_mark;
        }
        else
        {
            parent_mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark>();
            parent_mark->parent = this;
            children["parent-mark"] = parent_mark;
        }
        return children.at("parent-mark");
    }

    if(child_yang_name == "parent-police-conform")
    {
        if(parent_police_conform != nullptr)
        {
            children["parent-police-conform"] = parent_police_conform;
        }
        else
        {
            parent_police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform>();
            parent_police_conform->parent = this;
            children["parent-police-conform"] = parent_police_conform;
        }
        return children.at("parent-police-conform");
    }

    if(child_yang_name == "parent-police-exceed")
    {
        if(parent_police_exceed != nullptr)
        {
            children["parent-police-exceed"] = parent_police_exceed;
        }
        else
        {
            parent_police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed>();
            parent_police_exceed->parent = this;
            children["parent-police-exceed"] = parent_police_exceed;
        }
        return children.at("parent-police-exceed");
    }

    if(child_yang_name == "parent-police-violate")
    {
        if(parent_police_violate != nullptr)
        {
            children["parent-police-violate"] = parent_police_violate;
        }
        else
        {
            parent_police_violate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate>();
            parent_police_violate->parent = this;
            children["parent-police-violate"] = parent_police_violate;
        }
        return children.at("parent-police-violate");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform;
        }
        else
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform;
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed;
        }
        else
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed;
        }
        return children.at("police-exceed");
    }

    if(child_yang_name == "police-violate")
    {
        if(police_violate != nullptr)
        {
            children["police-violate"] = police_violate;
        }
        else
        {
            police_violate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate>();
            police_violate->parent = this;
            children["police-violate"] = police_violate;
        }
        return children.at("police-violate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_children()
{
    if(children.find("child-mark") == children.end())
    {
        if(child_mark != nullptr)
        {
            children["child-mark"] = child_mark;
        }
    }

    if(children.find("parent-mark") == children.end())
    {
        if(parent_mark != nullptr)
        {
            children["parent-mark"] = parent_mark;
        }
    }

    if(children.find("parent-police-conform") == children.end())
    {
        if(parent_police_conform != nullptr)
        {
            children["parent-police-conform"] = parent_police_conform;
        }
    }

    if(children.find("parent-police-exceed") == children.end())
    {
        if(parent_police_exceed != nullptr)
        {
            children["parent-police-exceed"] = parent_police_exceed;
        }
    }

    if(children.find("parent-police-violate") == children.end())
    {
        if(parent_police_violate != nullptr)
        {
            children["parent-police-violate"] = parent_police_violate;
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform;
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed;
        }
    }

    if(children.find("police-violate") == children.end())
    {
        if(police_violate != nullptr)
        {
            children["police-violate"] = police_violate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::ChildMark()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "child-mark"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::~ChildMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildMark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "child-mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceConform' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceExceed' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::PoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-violate"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::~PoliceViolate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-violate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceViolate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-violate";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::ParentMark()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-mark"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::~ParentMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentMark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::ParentPoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-conform"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::~ParentPoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceConform' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::ParentPoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-exceed"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::~ParentPoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceExceed' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::ParentPoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-violate"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::~ParentPoliceViolate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-violate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceViolate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-violate";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleOutput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::BundleInput()
    :
    member_interfaces(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces>())
{
    member_interfaces->parent = this;
    children["member-interfaces"] = member_interfaces;

    yang_name = "bundle-input"; yang_parent_name = "bundle-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::~BundleInput()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::has_data() const
{
    return (member_interfaces !=  nullptr && member_interfaces->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::has_operation() const
{
    return is_set(operation)
	|| (member_interfaces !=  nullptr && member_interfaces->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-input";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInput' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interfaces")
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces;
        }
        else
        {
            member_interfaces = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces>();
            member_interfaces->parent = this;
            children["member-interfaces"] = member_interfaces;
        }
        return children.at("member-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::get_children()
{
    if(children.find("member-interfaces") == children.end())
    {
        if(member_interfaces != nullptr)
        {
            children["member-interfaces"] = member_interfaces;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterfaces()
{
    yang_name = "member-interfaces"; yang_parent_name = "bundle-input";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::~MemberInterfaces()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::has_data() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::has_operation() const
{
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interfaces";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterfaces' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface>();
        c->parent = this;
        member_interface.push_back(std::move(c));
        children[segment_path] = member_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::get_children()
{
    for (auto const & c : member_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::MemberInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    details(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details>())
{
    details->parent = this;
    children["details"] = details;

    yang_name = "member-interface"; yang_parent_name = "member-interfaces";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::~MemberInterface()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::has_data() const
{
    return interface_name.is_set
	|| (details !=  nullptr && details->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (details !=  nullptr && details->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberInterface' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
        else
        {
            details = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details>();
            details->parent = this;
            children["details"] = details;
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::get_children()
{
    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Details()
    :
    header(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header>())
	,policy(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy>())
	,policy_typhoon(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon>())
{
    header->parent = this;
    children["header"] = header;

    policy->parent = this;
    children["policy"] = policy;

    policy_typhoon->parent = this;
    children["policy-typhoon"] = policy_typhoon;

    yang_name = "details"; yang_parent_name = "member-interface";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::~Details()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::has_data() const
{
    return (header !=  nullptr && header->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (policy_typhoon !=  nullptr && policy_typhoon->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::has_operation() const
{
    return is_set(operation)
	|| (header !=  nullptr && header->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (policy_typhoon !=  nullptr && policy_typhoon->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Details' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
        else
        {
            header = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header>();
            header->parent = this;
            children["header"] = header;
        }
        return children.at("header");
    }

    if(child_yang_name == "policy")
    {
        if(policy != nullptr)
        {
            children["policy"] = policy;
        }
        else
        {
            policy = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy>();
            policy->parent = this;
            children["policy"] = policy;
        }
        return children.at("policy");
    }

    if(child_yang_name == "policy-typhoon")
    {
        if(policy_typhoon != nullptr)
        {
            children["policy-typhoon"] = policy_typhoon;
        }
        else
        {
            policy_typhoon = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon>();
            policy_typhoon->parent = this;
            children["policy-typhoon"] = policy_typhoon;
        }
        return children.at("policy-typhoon");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::get_children()
{
    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
    }

    if(children.find("policy") == children.end())
    {
        if(policy != nullptr)
        {
            children["policy"] = policy;
        }
    }

    if(children.find("policy-typhoon") == children.end())
    {
        if(policy_typhoon != nullptr)
        {
            children["policy-typhoon"] = policy_typhoon;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::Header()
    :
    classes{YType::uint16, "classes"},
    policy_name{YType::str, "policy-name"}
    	,
    interface_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters>())
	,programmed_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth>())
{
    interface_parameters->parent = this;
    children["interface-parameters"] = interface_parameters;

    programmed_bandwidth->parent = this;
    children["programmed-bandwidth"] = programmed_bandwidth;

    yang_name = "header"; yang_parent_name = "details";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::~Header()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::has_data() const
{
    return classes.is_set
	|| policy_name.is_set
	|| (interface_parameters !=  nullptr && interface_parameters->has_data())
	|| (programmed_bandwidth !=  nullptr && programmed_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(classes.operation)
	|| is_set(policy_name.operation)
	|| (interface_parameters !=  nullptr && interface_parameters->has_operation())
	|| (programmed_bandwidth !=  nullptr && programmed_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Header' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classes.is_set || is_set(classes.operation)) leaf_name_data.push_back(classes.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-parameters")
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters;
        }
        else
        {
            interface_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters>();
            interface_parameters->parent = this;
            children["interface-parameters"] = interface_parameters;
        }
        return children.at("interface-parameters");
    }

    if(child_yang_name == "programmed-bandwidth")
    {
        if(programmed_bandwidth != nullptr)
        {
            children["programmed-bandwidth"] = programmed_bandwidth;
        }
        else
        {
            programmed_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth>();
            programmed_bandwidth->parent = this;
            children["programmed-bandwidth"] = programmed_bandwidth;
        }
        return children.at("programmed-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::get_children()
{
    if(children.find("interface-parameters") == children.end())
    {
        if(interface_parameters != nullptr)
        {
            children["interface-parameters"] = interface_parameters;
        }
    }

    if(children.find("programmed-bandwidth") == children.end())
    {
        if(programmed_bandwidth != nullptr)
        {
            children["programmed-bandwidth"] = programmed_bandwidth;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classes")
    {
        classes = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::InterfaceParameters()
    :
    ancp_config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth>())
	,ancp_programmed_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth>())
	,port_config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth>())
	,port_shaper_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate>())
{
    ancp_config_bandwidth->parent = this;
    children["ancp-config-bandwidth"] = ancp_config_bandwidth;

    ancp_programmed_bandwidth->parent = this;
    children["ancp-programmed-bandwidth"] = ancp_programmed_bandwidth;

    port_config_bandwidth->parent = this;
    children["port-config-bandwidth"] = port_config_bandwidth;

    port_shaper_rate->parent = this;
    children["port-shaper-rate"] = port_shaper_rate;

    yang_name = "interface-parameters"; yang_parent_name = "header";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::~InterfaceParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::has_data() const
{
    return (ancp_config_bandwidth !=  nullptr && ancp_config_bandwidth->has_data())
	|| (ancp_programmed_bandwidth !=  nullptr && ancp_programmed_bandwidth->has_data())
	|| (port_config_bandwidth !=  nullptr && port_config_bandwidth->has_data())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::has_operation() const
{
    return is_set(operation)
	|| (ancp_config_bandwidth !=  nullptr && ancp_config_bandwidth->has_operation())
	|| (ancp_programmed_bandwidth !=  nullptr && ancp_programmed_bandwidth->has_operation())
	|| (port_config_bandwidth !=  nullptr && port_config_bandwidth->has_operation())
	|| (port_shaper_rate !=  nullptr && port_shaper_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceParameters' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ancp-config-bandwidth")
    {
        if(ancp_config_bandwidth != nullptr)
        {
            children["ancp-config-bandwidth"] = ancp_config_bandwidth;
        }
        else
        {
            ancp_config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth>();
            ancp_config_bandwidth->parent = this;
            children["ancp-config-bandwidth"] = ancp_config_bandwidth;
        }
        return children.at("ancp-config-bandwidth");
    }

    if(child_yang_name == "ancp-programmed-bandwidth")
    {
        if(ancp_programmed_bandwidth != nullptr)
        {
            children["ancp-programmed-bandwidth"] = ancp_programmed_bandwidth;
        }
        else
        {
            ancp_programmed_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth>();
            ancp_programmed_bandwidth->parent = this;
            children["ancp-programmed-bandwidth"] = ancp_programmed_bandwidth;
        }
        return children.at("ancp-programmed-bandwidth");
    }

    if(child_yang_name == "port-config-bandwidth")
    {
        if(port_config_bandwidth != nullptr)
        {
            children["port-config-bandwidth"] = port_config_bandwidth;
        }
        else
        {
            port_config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth>();
            port_config_bandwidth->parent = this;
            children["port-config-bandwidth"] = port_config_bandwidth;
        }
        return children.at("port-config-bandwidth");
    }

    if(child_yang_name == "port-shaper-rate")
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate;
        }
        else
        {
            port_shaper_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate>();
            port_shaper_rate->parent = this;
            children["port-shaper-rate"] = port_shaper_rate;
        }
        return children.at("port-shaper-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::get_children()
{
    if(children.find("ancp-config-bandwidth") == children.end())
    {
        if(ancp_config_bandwidth != nullptr)
        {
            children["ancp-config-bandwidth"] = ancp_config_bandwidth;
        }
    }

    if(children.find("ancp-programmed-bandwidth") == children.end())
    {
        if(ancp_programmed_bandwidth != nullptr)
        {
            children["ancp-programmed-bandwidth"] = ancp_programmed_bandwidth;
        }
    }

    if(children.find("port-config-bandwidth") == children.end())
    {
        if(port_config_bandwidth != nullptr)
        {
            children["port-config-bandwidth"] = port_config_bandwidth;
        }
    }

    if(children.find("port-shaper-rate") == children.end())
    {
        if(port_shaper_rate != nullptr)
        {
            children["port-shaper-rate"] = port_shaper_rate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::PortConfigBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "port-config-bandwidth"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::~PortConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-config-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortConfigBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortConfigBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::AncpConfigBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ancp-config-bandwidth"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::~AncpConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ancp-config-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AncpConfigBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpConfigBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::AncpProgrammedBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "ancp-programmed-bandwidth"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::~AncpProgrammedBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ancp-programmed-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AncpProgrammedBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::AncpProgrammedBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::PortShaperRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "port-shaper-rate"; yang_parent_name = "interface-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::~PortShaperRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-shaper-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortShaperRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::InterfaceParameters::PortShaperRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::ProgrammedBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "programmed-bandwidth"; yang_parent_name = "header";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::~ProgrammedBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "programmed-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProgrammedBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Header::ProgrammedBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::Policy()
{
    yang_name = "policy"; yang_parent_name = "details";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::~Policy()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v1.size(); index++)
    {
        if(qos_show_ea_st_v1[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v1.size(); index++)
    {
        if(qos_show_ea_st_v1[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-ea-st-v1")
    {
        for(auto const & c : qos_show_ea_st_v1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1>();
        c->parent = this;
        qos_show_ea_st_v1.push_back(std::move(c));
        children[segment_path] = qos_show_ea_st_v1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::get_children()
{
    for (auto const & c : qos_show_ea_st_v1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QosShowEaStV1()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    parent_class_name{YType::str, "parent-class-name"},
    parent_policy_name{YType::str, "parent-policy-name"},
    policy_name{YType::str, "policy-name"}
    	,
    mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark>())
	,police(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police>())
	,queue(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue>())
	,queue_limit_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq>())
	,wred(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred>())
{
    mark->parent = this;
    children["mark"] = mark;

    police->parent = this;
    children["police"] = police;

    queue->parent = this;
    children["queue"] = queue;

    queue_limit_parameters->parent = this;
    children["queue-limit-parameters"] = queue_limit_parameters;

    shape->parent = this;
    children["shape"] = shape;

    wfq->parent = this;
    children["wfq"] = wfq;

    wred->parent = this;
    children["wred"] = wred;

    yang_name = "qos-show-ea-st-v1"; yang_parent_name = "policy";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::~QosShowEaStV1()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| parent_class_name.is_set
	|| parent_policy_name.is_set
	|| policy_name.is_set
	|| (mark !=  nullptr && mark->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| is_set(parent_class_name.operation)
	|| is_set(parent_policy_name.operation)
	|| is_set(policy_name.operation)
	|| (mark !=  nullptr && mark->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (queue !=  nullptr && queue->has_operation())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-st-v1";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosShowEaStV1' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (parent_class_name.is_set || is_set(parent_class_name.operation)) leaf_name_data.push_back(parent_class_name.get_name_leafdata());
    if (parent_policy_name.is_set || is_set(parent_policy_name.operation)) leaf_name_data.push_back(parent_policy_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
        else
        {
            mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark>();
            mark->parent = this;
            children["mark"] = mark;
        }
        return children.at("mark");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
        else
        {
            police = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police>();
            police->parent = this;
            children["police"] = police;
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
        else
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue>();
            queue->parent = this;
            children["queue"] = queue;
        }
        return children.at("queue");
    }

    if(child_yang_name == "queue-limit-parameters")
    {
        if(queue_limit_parameters != nullptr)
        {
            children["queue-limit-parameters"] = queue_limit_parameters;
        }
        else
        {
            queue_limit_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters>();
            queue_limit_parameters->parent = this;
            children["queue-limit-parameters"] = queue_limit_parameters;
        }
        return children.at("queue-limit-parameters");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq;
        }
        else
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq;
        }
        return children.at("wfq");
    }

    if(child_yang_name == "wred")
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
        else
        {
            wred = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred>();
            wred->parent = this;
            children["wred"] = wred;
        }
        return children.at("wred");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::get_children()
{
    if(children.find("mark") == children.end())
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
    }

    if(children.find("queue-limit-parameters") == children.end())
    {
        if(queue_limit_parameters != nullptr)
        {
            children["queue-limit-parameters"] = queue_limit_parameters;
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq;
        }
    }

    if(children.find("wred") == children.end())
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "parent-class-name")
    {
        parent_class_name = value;
    }
    if(value_path == "parent-policy-name")
    {
        parent_policy_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::Queue()
    :
    class_name{YType::str, "class-name"},
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::enumeration, "queue-type"}
{
    yang_name = "queue"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::has_data() const
{
    return class_name.is_set
	|| queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(queue_id.operation)
	|| is_set(queue_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimitParameters()
    :
    profile_id{YType::uint32, "profile-id"},
    scaling_profile_id{YType::uint32, "scaling-profile-id"}
    	,
    config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit>())
	,queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit>())
{
    config_queue_limit->parent = this;
    children["config-queue-limit"] = config_queue_limit;

    queue_limit->parent = this;
    children["queue-limit"] = queue_limit;

    yang_name = "queue-limit-parameters"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::~QueueLimitParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::has_data() const
{
    return profile_id.is_set
	|| scaling_profile_id.is_set
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_id.operation)
	|| is_set(scaling_profile_id.operation)
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueLimitParameters' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scaling_profile_id.is_set || is_set(scaling_profile_id.operation)) leaf_name_data.push_back(scaling_profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit;
        }
        else
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit>();
            config_queue_limit->parent = this;
            children["config-queue-limit"] = config_queue_limit;
        }
        return children.at("config-queue-limit");
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit != nullptr)
        {
            children["queue-limit"] = queue_limit;
        }
        else
        {
            queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit>();
            queue_limit->parent = this;
            children["queue-limit"] = queue_limit;
        }
        return children.at("queue-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::get_children()
{
    if(children.find("config-queue-limit") == children.end())
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit;
        }
    }

    if(children.find("queue-limit") == children.end())
    {
        if(queue_limit != nullptr)
        {
            children["queue-limit"] = queue_limit;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
    if(value_path == "scaling-profile-id")
    {
        scaling_profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::QueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-limit"; yang_parent_name = "queue-limit-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::~QueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueLimit' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::QueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::ConfigQueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "config-queue-limit"; yang_parent_name = "queue-limit-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigQueueLimit' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::QueueLimitParameters::ConfigQueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Shape()
    :
    profile_id{YType::uint16, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir>())
	,config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir>())
{
    cbs->parent = this;
    children["cbs"] = cbs;

    cir->parent = this;
    children["cir"] = cir;

    config_bandwidth->parent = this;
    children["config-bandwidth"] = config_bandwidth;

    pbs->parent = this;
    children["pbs"] = pbs;

    pir->parent = this;
    children["pir"] = pir;

    yang_name = "shape"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::has_data() const
{
    return profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_id.operation)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
        else
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs;
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
        else
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir>();
            cir->parent = this;
            children["cir"] = cir;
        }
        return children.at("cir");
    }

    if(child_yang_name == "config-bandwidth")
    {
        if(config_bandwidth != nullptr)
        {
            children["config-bandwidth"] = config_bandwidth;
        }
        else
        {
            config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth>();
            config_bandwidth->parent = this;
            children["config-bandwidth"] = config_bandwidth;
        }
        return children.at("config-bandwidth");
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
        else
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs;
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
        else
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir>();
            pir->parent = this;
            children["pir"] = pir;
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
    }

    if(children.find("config-bandwidth") == children.end())
    {
        if(config_bandwidth != nullptr)
        {
            children["config-bandwidth"] = config_bandwidth;
        }
    }

    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::ConfigBandwidth()
    :
    minimum_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate>())
{
    minimum_rate->parent = this;
    children["minimum-rate"] = minimum_rate;

    yang_name = "config-bandwidth"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::~ConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::has_data() const
{
    return (minimum_rate !=  nullptr && minimum_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::has_operation() const
{
    return is_set(operation)
	|| (minimum_rate !=  nullptr && minimum_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minimum-rate")
    {
        if(minimum_rate != nullptr)
        {
            children["minimum-rate"] = minimum_rate;
        }
        else
        {
            minimum_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate>();
            minimum_rate->parent = this;
            children["minimum-rate"] = minimum_rate;
        }
        return children.at("minimum-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::get_children()
{
    if(children.find("minimum-rate") == children.end())
    {
        if(minimum_rate != nullptr)
        {
            children["minimum-rate"] = minimum_rate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::MinimumRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "minimum-rate"; yang_parent_name = "config-bandwidth";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::~MinimumRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinimumRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::ConfigBandwidth::MinimumRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Shape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Police()
    :
    policer_type{YType::enumeration, "policer-type"},
    profile_id{YType::uint32, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir>())
	,police_config_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters>())
{
    cbs->parent = this;
    children["cbs"] = cbs;

    cir->parent = this;
    children["cir"] = cir;

    pbs->parent = this;
    children["pbs"] = pbs;

    pir->parent = this;
    children["pir"] = pir;

    police_config_parameters->parent = this;
    children["police-config-parameters"] = police_config_parameters;

    yang_name = "police"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::has_data() const
{
    return policer_type.is_set
	|| profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_type.operation)
	|| is_set(profile_id.operation)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
        else
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs;
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
        else
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir;
        }
        return children.at("cir");
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
        else
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs;
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
        else
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir>();
            pir->parent = this;
            children["pir"] = pir;
        }
        return children.at("pir");
    }

    if(child_yang_name == "police-config-parameters")
    {
        if(police_config_parameters != nullptr)
        {
            children["police-config-parameters"] = police_config_parameters;
        }
        else
        {
            police_config_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters>();
            police_config_parameters->parent = this;
            children["police-config-parameters"] = police_config_parameters;
        }
        return children.at("police-config-parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
    }

    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
    }

    if(children.find("police-config-parameters") == children.end())
    {
        if(police_config_parameters != nullptr)
        {
            children["police-config-parameters"] = police_config_parameters;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PoliceConfigParameters()
    :
    average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate>())
	,conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst>())
	,exceed_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst>())
	,peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate>())
{
    average_rate->parent = this;
    children["average-rate"] = average_rate;

    conform_burst->parent = this;
    children["conform-burst"] = conform_burst;

    exceed_burst->parent = this;
    children["exceed-burst"] = exceed_burst;

    peak_rate->parent = this;
    children["peak-rate"] = peak_rate;

    yang_name = "police-config-parameters"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::~PoliceConfigParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::has_data() const
{
    return (average_rate !=  nullptr && average_rate->has_data())
	|| (conform_burst !=  nullptr && conform_burst->has_data())
	|| (exceed_burst !=  nullptr && exceed_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::has_operation() const
{
    return is_set(operation)
	|| (average_rate !=  nullptr && average_rate->has_operation())
	|| (conform_burst !=  nullptr && conform_burst->has_operation())
	|| (exceed_burst !=  nullptr && exceed_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-config-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceConfigParameters' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "average-rate")
    {
        if(average_rate != nullptr)
        {
            children["average-rate"] = average_rate;
        }
        else
        {
            average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate>();
            average_rate->parent = this;
            children["average-rate"] = average_rate;
        }
        return children.at("average-rate");
    }

    if(child_yang_name == "conform-burst")
    {
        if(conform_burst != nullptr)
        {
            children["conform-burst"] = conform_burst;
        }
        else
        {
            conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst>();
            conform_burst->parent = this;
            children["conform-burst"] = conform_burst;
        }
        return children.at("conform-burst");
    }

    if(child_yang_name == "exceed-burst")
    {
        if(exceed_burst != nullptr)
        {
            children["exceed-burst"] = exceed_burst;
        }
        else
        {
            exceed_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst>();
            exceed_burst->parent = this;
            children["exceed-burst"] = exceed_burst;
        }
        return children.at("exceed-burst");
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate;
        }
        else
        {
            peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate>();
            peak_rate->parent = this;
            children["peak-rate"] = peak_rate;
        }
        return children.at("peak-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::get_children()
{
    if(children.find("average-rate") == children.end())
    {
        if(average_rate != nullptr)
        {
            children["average-rate"] = average_rate;
        }
    }

    if(children.find("conform-burst") == children.end())
    {
        if(conform_burst != nullptr)
        {
            children["conform-burst"] = conform_burst;
        }
    }

    if(children.find("exceed-burst") == children.end())
    {
        if(exceed_burst != nullptr)
        {
            children["exceed-burst"] = exceed_burst;
        }
    }

    if(children.find("peak-rate") == children.end())
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::AverageRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "average-rate"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::~AverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AverageRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::AverageRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::PeakRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "peak-rate"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::~PeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeakRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::PeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::ConformBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "conform-burst"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::~ConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformBurst' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ConformBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::ExceedBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "exceed-burst"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::~ExceedBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedBurst' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Police::PoliceConfigParameters::ExceedBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Wfq()
    :
    chunk_id{YType::uint32, "chunk-id"},
    committed_weight{YType::uint32, "committed-weight"},
    excess_ratio{YType::uint16, "excess-ratio"},
    excess_weight{YType::uint16, "excess-weight"},
    level{YType::uint8, "level"},
    profile_id{YType::uint32, "profile-id"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth>())
	,parent_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth;

    parent_bandwidth->parent = this;
    children["parent-bandwidth"] = parent_bandwidth;

    yang_name = "wfq"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::has_data() const
{
    return chunk_id.is_set
	|| committed_weight.is_set
	|| excess_ratio.is_set
	|| excess_weight.is_set
	|| level.is_set
	|| profile_id.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(chunk_id.operation)
	|| is_set(committed_weight.operation)
	|| is_set(excess_ratio.operation)
	|| is_set(excess_weight.operation)
	|| is_set(level.operation)
	|| is_set(profile_id.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wfq' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.operation)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (committed_weight.is_set || is_set(committed_weight.operation)) leaf_name_data.push_back(committed_weight.get_name_leafdata());
    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());
    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "parent-bandwidth")
    {
        if(parent_bandwidth != nullptr)
        {
            children["parent-bandwidth"] = parent_bandwidth;
        }
        else
        {
            parent_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth>();
            parent_bandwidth->parent = this;
            children["parent-bandwidth"] = parent_bandwidth;
        }
        return children.at("parent-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("parent-bandwidth") == children.end())
    {
        if(parent_bandwidth != nullptr)
        {
            children["parent-bandwidth"] = parent_bandwidth;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
    }
    if(value_path == "committed-weight")
    {
        committed_weight = value;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::ParentBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "parent-bandwidth"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::~ParentBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::ParentBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::Bandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Wred()
    :
    curve_xr{YType::uint16, "curve-xr"},
    profile_id{YType::uint32, "profile-id"},
    scaling_profile_id{YType::uint32, "scaling-profile-id"},
    table_id{YType::uint8, "table-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "wred"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::has_data() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_data())
            return true;
    }
    return curve_xr.is_set
	|| profile_id.is_set
	|| scaling_profile_id.is_set
	|| table_id.is_set
	|| type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::has_operation() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(curve_xr.operation)
	|| is_set(profile_id.operation)
	|| is_set(scaling_profile_id.operation)
	|| is_set(table_id.operation)
	|| is_set(type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wred' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curve_xr.is_set || is_set(curve_xr.operation)) leaf_name_data.push_back(curve_xr.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scaling_profile_id.is_set || is_set(scaling_profile_id.operation)) leaf_name_data.push_back(scaling_profile_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "curve")
    {
        for(auto const & c : curve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve>();
        c->parent = this;
        curve.push_back(std::move(c));
        children[segment_path] = curve.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::get_children()
{
    for (auto const & c : curve)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "curve-xr")
    {
        curve_xr = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
    if(value_path == "scaling-profile-id")
    {
        scaling_profile_id = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::Curve()
    :
    match{YType::str, "match"}
    	,
    max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold>())
	,max_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig>())
	,min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold>())
	,min_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig>())
{
    max_threshold->parent = this;
    children["max-threshold"] = max_threshold;

    max_threshold_user_config->parent = this;
    children["max-threshold-user-config"] = max_threshold_user_config;

    min_threshold->parent = this;
    children["min-threshold"] = min_threshold;

    min_threshold_user_config->parent = this;
    children["min-threshold-user-config"] = min_threshold_user_config;

    yang_name = "curve"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::~Curve()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::has_data() const
{
    return match.is_set
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::has_operation() const
{
    return is_set(operation)
	|| is_set(match.operation)
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curve";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Curve' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match.is_set || is_set(match.operation)) leaf_name_data.push_back(match.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-threshold")
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
        else
        {
            max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold>();
            max_threshold->parent = this;
            children["max-threshold"] = max_threshold;
        }
        return children.at("max-threshold");
    }

    if(child_yang_name == "max-threshold-user-config")
    {
        if(max_threshold_user_config != nullptr)
        {
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
        else
        {
            max_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig>();
            max_threshold_user_config->parent = this;
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
        return children.at("max-threshold-user-config");
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
        else
        {
            min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold>();
            min_threshold->parent = this;
            children["min-threshold"] = min_threshold;
        }
        return children.at("min-threshold");
    }

    if(child_yang_name == "min-threshold-user-config")
    {
        if(min_threshold_user_config != nullptr)
        {
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
        else
        {
            min_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig>();
            min_threshold_user_config->parent = this;
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
        return children.at("min-threshold-user-config");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::get_children()
{
    if(children.find("max-threshold") == children.end())
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
    }

    if(children.find("max-threshold-user-config") == children.end())
    {
        if(max_threshold_user_config != nullptr)
        {
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
    }

    if(children.find("min-threshold") == children.end())
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
    }

    if(children.find("min-threshold-user-config") == children.end())
    {
        if(min_threshold_user_config != nullptr)
        {
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match")
    {
        match = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::~MinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThreshold' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::MinThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold-user-config"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::~MinThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold-user-config";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThresholdUserConfig' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MinThresholdUserConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::~MaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThreshold' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::MaxThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold-user-config"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::~MaxThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold-user-config";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThresholdUserConfig' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Wred::Curve::MaxThresholdUserConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::Mark()
    :
    child_mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark>())
	,parent_mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark>())
	,parent_police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform>())
	,parent_police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed>())
	,parent_police_violate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed>())
	,police_violate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate>())
{
    child_mark->parent = this;
    children["child-mark"] = child_mark;

    parent_mark->parent = this;
    children["parent-mark"] = parent_mark;

    parent_police_conform->parent = this;
    children["parent-police-conform"] = parent_police_conform;

    parent_police_exceed->parent = this;
    children["parent-police-exceed"] = parent_police_exceed;

    parent_police_violate->parent = this;
    children["parent-police-violate"] = parent_police_violate;

    police_conform->parent = this;
    children["police-conform"] = police_conform;

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed;

    police_violate->parent = this;
    children["police-violate"] = police_violate;

    yang_name = "mark"; yang_parent_name = "qos-show-ea-st-v1";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::has_data() const
{
    return (child_mark !=  nullptr && child_mark->has_data())
	|| (parent_mark !=  nullptr && parent_mark->has_data())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_data())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_data())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data())
	|| (police_violate !=  nullptr && police_violate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::has_operation() const
{
    return is_set(operation)
	|| (child_mark !=  nullptr && child_mark->has_operation())
	|| (parent_mark !=  nullptr && parent_mark->has_operation())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_operation())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_operation())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation())
	|| (police_violate !=  nullptr && police_violate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "child-mark")
    {
        if(child_mark != nullptr)
        {
            children["child-mark"] = child_mark;
        }
        else
        {
            child_mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark>();
            child_mark->parent = this;
            children["child-mark"] = child_mark;
        }
        return children.at("child-mark");
    }

    if(child_yang_name == "parent-mark")
    {
        if(parent_mark != nullptr)
        {
            children["parent-mark"] = parent_mark;
        }
        else
        {
            parent_mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark>();
            parent_mark->parent = this;
            children["parent-mark"] = parent_mark;
        }
        return children.at("parent-mark");
    }

    if(child_yang_name == "parent-police-conform")
    {
        if(parent_police_conform != nullptr)
        {
            children["parent-police-conform"] = parent_police_conform;
        }
        else
        {
            parent_police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform>();
            parent_police_conform->parent = this;
            children["parent-police-conform"] = parent_police_conform;
        }
        return children.at("parent-police-conform");
    }

    if(child_yang_name == "parent-police-exceed")
    {
        if(parent_police_exceed != nullptr)
        {
            children["parent-police-exceed"] = parent_police_exceed;
        }
        else
        {
            parent_police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed>();
            parent_police_exceed->parent = this;
            children["parent-police-exceed"] = parent_police_exceed;
        }
        return children.at("parent-police-exceed");
    }

    if(child_yang_name == "parent-police-violate")
    {
        if(parent_police_violate != nullptr)
        {
            children["parent-police-violate"] = parent_police_violate;
        }
        else
        {
            parent_police_violate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate>();
            parent_police_violate->parent = this;
            children["parent-police-violate"] = parent_police_violate;
        }
        return children.at("parent-police-violate");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform;
        }
        else
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform;
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed;
        }
        else
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed;
        }
        return children.at("police-exceed");
    }

    if(child_yang_name == "police-violate")
    {
        if(police_violate != nullptr)
        {
            children["police-violate"] = police_violate;
        }
        else
        {
            police_violate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate>();
            police_violate->parent = this;
            children["police-violate"] = police_violate;
        }
        return children.at("police-violate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::get_children()
{
    if(children.find("child-mark") == children.end())
    {
        if(child_mark != nullptr)
        {
            children["child-mark"] = child_mark;
        }
    }

    if(children.find("parent-mark") == children.end())
    {
        if(parent_mark != nullptr)
        {
            children["parent-mark"] = parent_mark;
        }
    }

    if(children.find("parent-police-conform") == children.end())
    {
        if(parent_police_conform != nullptr)
        {
            children["parent-police-conform"] = parent_police_conform;
        }
    }

    if(children.find("parent-police-exceed") == children.end())
    {
        if(parent_police_exceed != nullptr)
        {
            children["parent-police-exceed"] = parent_police_exceed;
        }
    }

    if(children.find("parent-police-violate") == children.end())
    {
        if(parent_police_violate != nullptr)
        {
            children["parent-police-violate"] = parent_police_violate;
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform;
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed;
        }
    }

    if(children.find("police-violate") == children.end())
    {
        if(police_violate != nullptr)
        {
            children["police-violate"] = police_violate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::ChildMark()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "child-mark"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::~ChildMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildMark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "child-mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ChildMark::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceConform' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceExceed' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::PoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-violate"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::~PoliceViolate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-violate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceViolate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-violate";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::PoliceViolate::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::ParentMark()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-mark"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::~ParentMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentMark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentMark::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::ParentPoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-conform"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::~ParentPoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceConform' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::ParentPoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-exceed"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::~ParentPoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceExceed' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::ParentPoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-violate"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::~ParentPoliceViolate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-violate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceViolate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-violate";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::Policy::QosShowEaStV1::Mark::ParentPoliceViolate::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::PolicyTyphoon()
{
    yang_name = "policy-typhoon"; yang_parent_name = "details";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::~PolicyTyphoon()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::has_data() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v2.size(); index++)
    {
        if(qos_show_ea_st_v2[index]->has_data())
            return true;
    }
    return false;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::has_operation() const
{
    for (std::size_t index=0; index<qos_show_ea_st_v2.size(); index++)
    {
        if(qos_show_ea_st_v2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-typhoon";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyTyphoon' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qos-show-ea-st-v2")
    {
        for(auto const & c : qos_show_ea_st_v2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2>();
        c->parent = this;
        qos_show_ea_st_v2.push_back(std::move(c));
        children[segment_path] = qos_show_ea_st_v2.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::get_children()
{
    for (auto const & c : qos_show_ea_st_v2)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QosShowEaStV2()
    :
    class_level{YType::uint8, "class-level"},
    class_name{YType::str, "class-name"},
    parent_class_name{YType::str, "parent-class-name"},
    parent_policy_name{YType::str, "parent-policy-name"},
    policy_name{YType::str, "policy-name"}
    	,
    mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark>())
	,police(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police>())
	,queue(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue>())
	,queue_limit_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters>())
	,shape(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape>())
	,wfq(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq>())
	,wred(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred>())
{
    mark->parent = this;
    children["mark"] = mark;

    police->parent = this;
    children["police"] = police;

    queue->parent = this;
    children["queue"] = queue;

    queue_limit_parameters->parent = this;
    children["queue-limit-parameters"] = queue_limit_parameters;

    shape->parent = this;
    children["shape"] = shape;

    wfq->parent = this;
    children["wfq"] = wfq;

    wred->parent = this;
    children["wred"] = wred;

    yang_name = "qos-show-ea-st-v2"; yang_parent_name = "policy-typhoon";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::~QosShowEaStV2()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::has_data() const
{
    return class_level.is_set
	|| class_name.is_set
	|| parent_class_name.is_set
	|| parent_policy_name.is_set
	|| policy_name.is_set
	|| (mark !=  nullptr && mark->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue !=  nullptr && queue->has_data())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (wfq !=  nullptr && wfq->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::has_operation() const
{
    return is_set(operation)
	|| is_set(class_level.operation)
	|| is_set(class_name.operation)
	|| is_set(parent_class_name.operation)
	|| is_set(parent_policy_name.operation)
	|| is_set(policy_name.operation)
	|| (mark !=  nullptr && mark->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (queue !=  nullptr && queue->has_operation())
	|| (queue_limit_parameters !=  nullptr && queue_limit_parameters->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (wfq !=  nullptr && wfq->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-show-ea-st-v2";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QosShowEaStV2' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_level.is_set || is_set(class_level.operation)) leaf_name_data.push_back(class_level.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (parent_class_name.is_set || is_set(parent_class_name.operation)) leaf_name_data.push_back(parent_class_name.get_name_leafdata());
    if (parent_policy_name.is_set || is_set(parent_policy_name.operation)) leaf_name_data.push_back(parent_policy_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark")
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
        else
        {
            mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark>();
            mark->parent = this;
            children["mark"] = mark;
        }
        return children.at("mark");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
        else
        {
            police = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police>();
            police->parent = this;
            children["police"] = police;
        }
        return children.at("police");
    }

    if(child_yang_name == "queue")
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
        else
        {
            queue = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue>();
            queue->parent = this;
            children["queue"] = queue;
        }
        return children.at("queue");
    }

    if(child_yang_name == "queue-limit-parameters")
    {
        if(queue_limit_parameters != nullptr)
        {
            children["queue-limit-parameters"] = queue_limit_parameters;
        }
        else
        {
            queue_limit_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters>();
            queue_limit_parameters->parent = this;
            children["queue-limit-parameters"] = queue_limit_parameters;
        }
        return children.at("queue-limit-parameters");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
        else
        {
            shape = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape>();
            shape->parent = this;
            children["shape"] = shape;
        }
        return children.at("shape");
    }

    if(child_yang_name == "wfq")
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq;
        }
        else
        {
            wfq = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq>();
            wfq->parent = this;
            children["wfq"] = wfq;
        }
        return children.at("wfq");
    }

    if(child_yang_name == "wred")
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
        else
        {
            wred = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred>();
            wred->parent = this;
            children["wred"] = wred;
        }
        return children.at("wred");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::get_children()
{
    if(children.find("mark") == children.end())
    {
        if(mark != nullptr)
        {
            children["mark"] = mark;
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police;
        }
    }

    if(children.find("queue") == children.end())
    {
        if(queue != nullptr)
        {
            children["queue"] = queue;
        }
    }

    if(children.find("queue-limit-parameters") == children.end())
    {
        if(queue_limit_parameters != nullptr)
        {
            children["queue-limit-parameters"] = queue_limit_parameters;
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape;
        }
    }

    if(children.find("wfq") == children.end())
    {
        if(wfq != nullptr)
        {
            children["wfq"] = wfq;
        }
    }

    if(children.find("wred") == children.end())
    {
        if(wred != nullptr)
        {
            children["wred"] = wred;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-level")
    {
        class_level = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "parent-class-name")
    {
        parent_class_name = value;
    }
    if(value_path == "parent-policy-name")
    {
        parent_policy_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::Queue()
    :
    class_name{YType::str, "class-name"},
    queue_id{YType::uint32, "queue-id"},
    queue_type{YType::enumeration, "queue-type"}
{
    yang_name = "queue"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::~Queue()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_data() const
{
    return class_name.is_set
	|| queue_id.is_set
	|| queue_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(queue_id.operation)
	|| is_set(queue_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (queue_type.is_set || is_set(queue_type.operation)) leaf_name_data.push_back(queue_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "queue-type")
    {
        queue_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimitParameters()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    template_id{YType::uint16, "template-id"}
    	,
    config_queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit>())
	,queue_limit(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit>())
{
    config_queue_limit->parent = this;
    children["config-queue-limit"] = config_queue_limit;

    queue_limit->parent = this;
    children["queue-limit"] = queue_limit;

    yang_name = "queue-limit-parameters"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::~QueueLimitParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| template_id.is_set
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_index.operation)
	|| is_set(curve_id.operation)
	|| is_set(template_id.operation)
	|| (config_queue_limit !=  nullptr && config_queue_limit->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueLimitParameters' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.operation)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.operation)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.operation)) leaf_name_data.push_back(template_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config-queue-limit")
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit;
        }
        else
        {
            config_queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit>();
            config_queue_limit->parent = this;
            children["config-queue-limit"] = config_queue_limit;
        }
        return children.at("config-queue-limit");
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit != nullptr)
        {
            children["queue-limit"] = queue_limit;
        }
        else
        {
            queue_limit = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit>();
            queue_limit->parent = this;
            children["queue-limit"] = queue_limit;
        }
        return children.at("queue-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::get_children()
{
    if(children.find("config-queue-limit") == children.end())
    {
        if(config_queue_limit != nullptr)
        {
            children["config-queue-limit"] = config_queue_limit;
        }
    }

    if(children.find("queue-limit") == children.end())
    {
        if(queue_limit != nullptr)
        {
            children["queue-limit"] = queue_limit;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
    }
    if(value_path == "template-id")
    {
        template_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::QueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "queue-limit"; yang_parent_name = "queue-limit-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::~QueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueueLimit' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::QueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::ConfigQueueLimit()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "config-queue-limit"; yang_parent_name = "queue-limit-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::~ConfigQueueLimit()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-queue-limit";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigQueueLimit' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::QueueLimitParameters::ConfigQueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::Shape()
    :
    cir_shape_type{YType::enumeration, "cir-shape-type"},
    pir_shape_type{YType::enumeration, "pir-shape-type"}
    	,
    cir_shape(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape>())
	,pir_shape(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape>())
{
    cir_shape->parent = this;
    children["cir-shape"] = cir_shape;

    pir_shape->parent = this;
    children["pir-shape"] = pir_shape;

    yang_name = "shape"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::~Shape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_data() const
{
    return cir_shape_type.is_set
	|| pir_shape_type.is_set
	|| (cir_shape !=  nullptr && cir_shape->has_data())
	|| (pir_shape !=  nullptr && pir_shape->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::has_operation() const
{
    return is_set(operation)
	|| is_set(cir_shape_type.operation)
	|| is_set(pir_shape_type.operation)
	|| (cir_shape !=  nullptr && cir_shape->has_operation())
	|| (pir_shape !=  nullptr && pir_shape->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shape' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cir_shape_type.is_set || is_set(cir_shape_type.operation)) leaf_name_data.push_back(cir_shape_type.get_name_leafdata());
    if (pir_shape_type.is_set || is_set(pir_shape_type.operation)) leaf_name_data.push_back(pir_shape_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cir-shape")
    {
        if(cir_shape != nullptr)
        {
            children["cir-shape"] = cir_shape;
        }
        else
        {
            cir_shape = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape>();
            cir_shape->parent = this;
            children["cir-shape"] = cir_shape;
        }
        return children.at("cir-shape");
    }

    if(child_yang_name == "pir-shape")
    {
        if(pir_shape != nullptr)
        {
            children["pir-shape"] = pir_shape;
        }
        else
        {
            pir_shape = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape>();
            pir_shape->parent = this;
            children["pir-shape"] = pir_shape;
        }
        return children.at("pir-shape");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::get_children()
{
    if(children.find("cir-shape") == children.end())
    {
        if(cir_shape != nullptr)
        {
            children["cir-shape"] = cir_shape;
        }
    }

    if(children.find("pir-shape") == children.end())
    {
        if(pir_shape != nullptr)
        {
            children["pir-shape"] = pir_shape;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cir-shape-type")
    {
        cir_shape_type = value;
    }
    if(value_path == "pir-shape-type")
    {
        pir_shape_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::CirShape()
    :
    chunk_id{YType::uint32, "chunk-id"},
    profile_id{YType::uint16, "profile-id"},
    scale_factor{YType::uint16, "scale-factor"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir>())
	,config_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth>())
{
    cbs->parent = this;
    children["cbs"] = cbs;

    cir->parent = this;
    children["cir"] = cir;

    config_bandwidth->parent = this;
    children["config-bandwidth"] = config_bandwidth;

    yang_name = "cir-shape"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::~CirShape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_data() const
{
    return chunk_id.is_set
	|| profile_id.is_set
	|| scale_factor.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::has_operation() const
{
    return is_set(operation)
	|| is_set(chunk_id.operation)
	|| is_set(profile_id.operation)
	|| is_set(scale_factor.operation)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (config_bandwidth !=  nullptr && config_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir-shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CirShape' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.operation)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.operation)) leaf_name_data.push_back(scale_factor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
        else
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs;
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
        else
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir>();
            cir->parent = this;
            children["cir"] = cir;
        }
        return children.at("cir");
    }

    if(child_yang_name == "config-bandwidth")
    {
        if(config_bandwidth != nullptr)
        {
            children["config-bandwidth"] = config_bandwidth;
        }
        else
        {
            config_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth>();
            config_bandwidth->parent = this;
            children["config-bandwidth"] = config_bandwidth;
        }
        return children.at("config-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
    }

    if(children.find("config-bandwidth") == children.end())
    {
        if(config_bandwidth != nullptr)
        {
            children["config-bandwidth"] = config_bandwidth;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "cir-shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::ConfigBandwidth()
    :
    minimum_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate>())
{
    minimum_rate->parent = this;
    children["minimum-rate"] = minimum_rate;

    yang_name = "config-bandwidth"; yang_parent_name = "cir-shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::~ConfigBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_data() const
{
    return (minimum_rate !=  nullptr && minimum_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::has_operation() const
{
    return is_set(operation)
	|| (minimum_rate !=  nullptr && minimum_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfigBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minimum-rate")
    {
        if(minimum_rate != nullptr)
        {
            children["minimum-rate"] = minimum_rate;
        }
        else
        {
            minimum_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate>();
            minimum_rate->parent = this;
            children["minimum-rate"] = minimum_rate;
        }
        return children.at("minimum-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::get_children()
{
    if(children.find("minimum-rate") == children.end())
    {
        if(minimum_rate != nullptr)
        {
            children["minimum-rate"] = minimum_rate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::MinimumRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "minimum-rate"; yang_parent_name = "config-bandwidth";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::~MinimumRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinimumRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::ConfigBandwidth::MinimumRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "cir-shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::CirShape::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::PirShape()
    :
    chunk_id{YType::uint32, "chunk-id"},
    profile_id{YType::uint16, "profile-id"},
    scale_factor{YType::uint16, "scale-factor"}
    	,
    pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir>())
{
    pbs->parent = this;
    children["pbs"] = pbs;

    pir->parent = this;
    children["pir"] = pir;

    yang_name = "pir-shape"; yang_parent_name = "shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::~PirShape()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_data() const
{
    return chunk_id.is_set
	|| profile_id.is_set
	|| scale_factor.is_set
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::has_operation() const
{
    return is_set(operation)
	|| is_set(chunk_id.operation)
	|| is_set(profile_id.operation)
	|| is_set(scale_factor.operation)
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir-shape";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PirShape' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.operation)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (scale_factor.is_set || is_set(scale_factor.operation)) leaf_name_data.push_back(scale_factor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
        else
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs;
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
        else
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir>();
            pir->parent = this;
            children["pir"] = pir;
        }
        return children.at("pir");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::get_children()
{
    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
    if(value_path == "scale-factor")
    {
        scale_factor = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "pir-shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "pir-shape";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Shape::PirShape::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Police()
    :
    policer_type{YType::enumeration, "policer-type"},
    profile_id{YType::uint32, "profile-id"}
    	,
    cbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>())
	,cir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>())
	,pbs(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>())
	,pir(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>())
	,police_config_parameters(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>())
{
    cbs->parent = this;
    children["cbs"] = cbs;

    cir->parent = this;
    children["cir"] = cir;

    pbs->parent = this;
    children["pbs"] = pbs;

    pir->parent = this;
    children["pir"] = pir;

    police_config_parameters->parent = this;
    children["police-config-parameters"] = police_config_parameters;

    yang_name = "police"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::~Police()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::has_data() const
{
    return policer_type.is_set
	|| profile_id.is_set
	|| (cbs !=  nullptr && cbs->has_data())
	|| (cir !=  nullptr && cir->has_data())
	|| (pbs !=  nullptr && pbs->has_data())
	|| (pir !=  nullptr && pir->has_data())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::has_operation() const
{
    return is_set(operation)
	|| is_set(policer_type.operation)
	|| is_set(profile_id.operation)
	|| (cbs !=  nullptr && cbs->has_operation())
	|| (cir !=  nullptr && cir->has_operation())
	|| (pbs !=  nullptr && pbs->has_operation())
	|| (pir !=  nullptr && pir->has_operation())
	|| (police_config_parameters !=  nullptr && police_config_parameters->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Police' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer_type.is_set || is_set(policer_type.operation)) leaf_name_data.push_back(policer_type.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cbs")
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
        else
        {
            cbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs>();
            cbs->parent = this;
            children["cbs"] = cbs;
        }
        return children.at("cbs");
    }

    if(child_yang_name == "cir")
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
        else
        {
            cir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir>();
            cir->parent = this;
            children["cir"] = cir;
        }
        return children.at("cir");
    }

    if(child_yang_name == "pbs")
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
        else
        {
            pbs = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs>();
            pbs->parent = this;
            children["pbs"] = pbs;
        }
        return children.at("pbs");
    }

    if(child_yang_name == "pir")
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
        else
        {
            pir = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir>();
            pir->parent = this;
            children["pir"] = pir;
        }
        return children.at("pir");
    }

    if(child_yang_name == "police-config-parameters")
    {
        if(police_config_parameters != nullptr)
        {
            children["police-config-parameters"] = police_config_parameters;
        }
        else
        {
            police_config_parameters = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters>();
            police_config_parameters->parent = this;
            children["police-config-parameters"] = police_config_parameters;
        }
        return children.at("police-config-parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::get_children()
{
    if(children.find("cbs") == children.end())
    {
        if(cbs != nullptr)
        {
            children["cbs"] = cbs;
        }
    }

    if(children.find("cir") == children.end())
    {
        if(cir != nullptr)
        {
            children["cir"] = cir;
        }
    }

    if(children.find("pbs") == children.end())
    {
        if(pbs != nullptr)
        {
            children["pbs"] = pbs;
        }
    }

    if(children.find("pir") == children.end())
    {
        if(pir != nullptr)
        {
            children["pir"] = pir;
        }
    }

    if(children.find("police-config-parameters") == children.end())
    {
        if(police_config_parameters != nullptr)
        {
            children["police-config-parameters"] = police_config_parameters;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policer-type")
    {
        policer_type = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::Cir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::~Cir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::Cbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "cbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::~Cbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Cbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::Pir()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pir"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::~Pir()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pir";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pir' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pir::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::Pbs()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "pbs"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::~Pbs()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbs";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pbs' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::Pbs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PoliceConfigParameters()
    :
    average_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>())
	,conform_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>())
	,exceed_burst(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>())
	,peak_rate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>())
{
    average_rate->parent = this;
    children["average-rate"] = average_rate;

    conform_burst->parent = this;
    children["conform-burst"] = conform_burst;

    exceed_burst->parent = this;
    children["exceed-burst"] = exceed_burst;

    peak_rate->parent = this;
    children["peak-rate"] = peak_rate;

    yang_name = "police-config-parameters"; yang_parent_name = "police";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::~PoliceConfigParameters()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_data() const
{
    return (average_rate !=  nullptr && average_rate->has_data())
	|| (conform_burst !=  nullptr && conform_burst->has_data())
	|| (exceed_burst !=  nullptr && exceed_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::has_operation() const
{
    return is_set(operation)
	|| (average_rate !=  nullptr && average_rate->has_operation())
	|| (conform_burst !=  nullptr && conform_burst->has_operation())
	|| (exceed_burst !=  nullptr && exceed_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-config-parameters";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceConfigParameters' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "average-rate")
    {
        if(average_rate != nullptr)
        {
            children["average-rate"] = average_rate;
        }
        else
        {
            average_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate>();
            average_rate->parent = this;
            children["average-rate"] = average_rate;
        }
        return children.at("average-rate");
    }

    if(child_yang_name == "conform-burst")
    {
        if(conform_burst != nullptr)
        {
            children["conform-burst"] = conform_burst;
        }
        else
        {
            conform_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst>();
            conform_burst->parent = this;
            children["conform-burst"] = conform_burst;
        }
        return children.at("conform-burst");
    }

    if(child_yang_name == "exceed-burst")
    {
        if(exceed_burst != nullptr)
        {
            children["exceed-burst"] = exceed_burst;
        }
        else
        {
            exceed_burst = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst>();
            exceed_burst->parent = this;
            children["exceed-burst"] = exceed_burst;
        }
        return children.at("exceed-burst");
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate;
        }
        else
        {
            peak_rate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate>();
            peak_rate->parent = this;
            children["peak-rate"] = peak_rate;
        }
        return children.at("peak-rate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::get_children()
{
    if(children.find("average-rate") == children.end())
    {
        if(average_rate != nullptr)
        {
            children["average-rate"] = average_rate;
        }
    }

    if(children.find("conform-burst") == children.end())
    {
        if(conform_burst != nullptr)
        {
            children["conform-burst"] = conform_burst;
        }
    }

    if(children.find("exceed-burst") == children.end())
    {
        if(exceed_burst != nullptr)
        {
            children["exceed-burst"] = exceed_burst;
        }
    }

    if(children.find("peak-rate") == children.end())
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::AverageRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "average-rate"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::~AverageRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AverageRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::AverageRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::PeakRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "peak-rate"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::~PeakRate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeakRate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::PeakRate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::ConformBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "conform-burst"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::~ConformBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConformBurst' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ConformBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::ExceedBurst()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "exceed-burst"; yang_parent_name = "police-config-parameters";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::~ExceedBurst()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-burst";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExceedBurst' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Police::PoliceConfigParameters::ExceedBurst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Wfq()
    :
    chunk_id{YType::uint32, "chunk-id"},
    committed_weight{YType::uint32, "committed-weight"},
    excess_ratio{YType::uint16, "excess-ratio"},
    excess_weight{YType::uint16, "excess-weight"},
    level{YType::uint8, "level"},
    profile_id{YType::uint32, "profile-id"}
    	,
    bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>())
	,parent_bandwidth(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>())
{
    bandwidth->parent = this;
    children["bandwidth"] = bandwidth;

    parent_bandwidth->parent = this;
    children["parent-bandwidth"] = parent_bandwidth;

    yang_name = "wfq"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::~Wfq()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_data() const
{
    return chunk_id.is_set
	|| committed_weight.is_set
	|| excess_ratio.is_set
	|| excess_weight.is_set
	|| level.is_set
	|| profile_id.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::has_operation() const
{
    return is_set(operation)
	|| is_set(chunk_id.operation)
	|| is_set(committed_weight.operation)
	|| is_set(excess_ratio.operation)
	|| is_set(excess_weight.operation)
	|| is_set(level.operation)
	|| is_set(profile_id.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (parent_bandwidth !=  nullptr && parent_bandwidth->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wfq";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wfq' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chunk_id.is_set || is_set(chunk_id.operation)) leaf_name_data.push_back(chunk_id.get_name_leafdata());
    if (committed_weight.is_set || is_set(committed_weight.operation)) leaf_name_data.push_back(committed_weight.get_name_leafdata());
    if (excess_ratio.is_set || is_set(excess_ratio.operation)) leaf_name_data.push_back(excess_ratio.get_name_leafdata());
    if (excess_weight.is_set || is_set(excess_weight.operation)) leaf_name_data.push_back(excess_weight.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    if(child_yang_name == "parent-bandwidth")
    {
        if(parent_bandwidth != nullptr)
        {
            children["parent-bandwidth"] = parent_bandwidth;
        }
        else
        {
            parent_bandwidth = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth>();
            parent_bandwidth->parent = this;
            children["parent-bandwidth"] = parent_bandwidth;
        }
        return children.at("parent-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    if(children.find("parent-bandwidth") == children.end())
    {
        if(parent_bandwidth != nullptr)
        {
            children["parent-bandwidth"] = parent_bandwidth;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chunk-id")
    {
        chunk_id = value;
    }
    if(value_path == "committed-weight")
    {
        committed_weight = value;
    }
    if(value_path == "excess-ratio")
    {
        excess_ratio = value;
    }
    if(value_path == "excess-weight")
    {
        excess_weight = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::ParentBandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "parent-bandwidth"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::~ParentBandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentBandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::ParentBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::Bandwidth()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "bandwidth"; yang_parent_name = "wfq";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::~Bandwidth()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wfq::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Wred()
    :
    curve_xr{YType::uint16, "curve-xr"},
    type{YType::enumeration, "type"}
{
    yang_name = "wred"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::~Wred()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_data() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_data())
            return true;
    }
    return curve_xr.is_set
	|| type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::has_operation() const
{
    for (std::size_t index=0; index<curve.size(); index++)
    {
        if(curve[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(curve_xr.operation)
	|| is_set(type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wred";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wred' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (curve_xr.is_set || is_set(curve_xr.operation)) leaf_name_data.push_back(curve_xr.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "curve")
    {
        for(auto const & c : curve)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve>();
        c->parent = this;
        curve.push_back(std::move(c));
        children[segment_path] = curve.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::get_children()
{
    for (auto const & c : curve)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "curve-xr")
    {
        curve_xr = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::Curve()
    :
    absolute_index{YType::uint16, "absolute-index"},
    curve_id{YType::uint16, "curve-id"},
    exp_match{YType::str, "exp-match"},
    match{YType::str, "match"},
    template_id{YType::uint16, "template-id"}
    	,
    max_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>())
	,max_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>())
	,min_threshold(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>())
	,min_threshold_user_config(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>())
{
    max_threshold->parent = this;
    children["max-threshold"] = max_threshold;

    max_threshold_user_config->parent = this;
    children["max-threshold-user-config"] = max_threshold_user_config;

    min_threshold->parent = this;
    children["min-threshold"] = min_threshold;

    min_threshold_user_config->parent = this;
    children["min-threshold-user-config"] = min_threshold_user_config;

    yang_name = "curve"; yang_parent_name = "wred";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::~Curve()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_data() const
{
    return absolute_index.is_set
	|| curve_id.is_set
	|| exp_match.is_set
	|| match.is_set
	|| template_id.is_set
	|| (max_threshold !=  nullptr && max_threshold->has_data())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_data())
	|| (min_threshold !=  nullptr && min_threshold->has_data())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::has_operation() const
{
    return is_set(operation)
	|| is_set(absolute_index.operation)
	|| is_set(curve_id.operation)
	|| is_set(exp_match.operation)
	|| is_set(match.operation)
	|| is_set(template_id.operation)
	|| (max_threshold !=  nullptr && max_threshold->has_operation())
	|| (max_threshold_user_config !=  nullptr && max_threshold_user_config->has_operation())
	|| (min_threshold !=  nullptr && min_threshold->has_operation())
	|| (min_threshold_user_config !=  nullptr && min_threshold_user_config->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "curve";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Curve' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute_index.is_set || is_set(absolute_index.operation)) leaf_name_data.push_back(absolute_index.get_name_leafdata());
    if (curve_id.is_set || is_set(curve_id.operation)) leaf_name_data.push_back(curve_id.get_name_leafdata());
    if (exp_match.is_set || is_set(exp_match.operation)) leaf_name_data.push_back(exp_match.get_name_leafdata());
    if (match.is_set || is_set(match.operation)) leaf_name_data.push_back(match.get_name_leafdata());
    if (template_id.is_set || is_set(template_id.operation)) leaf_name_data.push_back(template_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "max-threshold")
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
        else
        {
            max_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold>();
            max_threshold->parent = this;
            children["max-threshold"] = max_threshold;
        }
        return children.at("max-threshold");
    }

    if(child_yang_name == "max-threshold-user-config")
    {
        if(max_threshold_user_config != nullptr)
        {
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
        else
        {
            max_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig>();
            max_threshold_user_config->parent = this;
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
        return children.at("max-threshold-user-config");
    }

    if(child_yang_name == "min-threshold")
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
        else
        {
            min_threshold = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold>();
            min_threshold->parent = this;
            children["min-threshold"] = min_threshold;
        }
        return children.at("min-threshold");
    }

    if(child_yang_name == "min-threshold-user-config")
    {
        if(min_threshold_user_config != nullptr)
        {
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
        else
        {
            min_threshold_user_config = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig>();
            min_threshold_user_config->parent = this;
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
        return children.at("min-threshold-user-config");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::get_children()
{
    if(children.find("max-threshold") == children.end())
    {
        if(max_threshold != nullptr)
        {
            children["max-threshold"] = max_threshold;
        }
    }

    if(children.find("max-threshold-user-config") == children.end())
    {
        if(max_threshold_user_config != nullptr)
        {
            children["max-threshold-user-config"] = max_threshold_user_config;
        }
    }

    if(children.find("min-threshold") == children.end())
    {
        if(min_threshold != nullptr)
        {
            children["min-threshold"] = min_threshold;
        }
    }

    if(children.find("min-threshold-user-config") == children.end())
    {
        if(min_threshold_user_config != nullptr)
        {
            children["min-threshold-user-config"] = min_threshold_user_config;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "absolute-index")
    {
        absolute_index = value;
    }
    if(value_path == "curve-id")
    {
        curve_id = value;
    }
    if(value_path == "exp-match")
    {
        exp_match = value;
    }
    if(value_path == "match")
    {
        match = value;
    }
    if(value_path == "template-id")
    {
        template_id = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::MinThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::~MinThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThreshold' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::MinThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "min-threshold-user-config"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::~MinThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-threshold-user-config";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinThresholdUserConfig' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MinThresholdUserConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::MaxThreshold()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::~MaxThreshold()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThreshold' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::MaxThresholdUserConfig()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "max-threshold-user-config"; yang_parent_name = "curve";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::~MaxThresholdUserConfig()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-threshold-user-config";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxThresholdUserConfig' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Wred::Curve::MaxThresholdUserConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::Mark()
    :
    child_mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark>())
	,parent_mark(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark>())
	,parent_police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform>())
	,parent_police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed>())
	,parent_police_violate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate>())
	,police_conform(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform>())
	,police_exceed(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed>())
	,police_violate(std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate>())
{
    child_mark->parent = this;
    children["child-mark"] = child_mark;

    parent_mark->parent = this;
    children["parent-mark"] = parent_mark;

    parent_police_conform->parent = this;
    children["parent-police-conform"] = parent_police_conform;

    parent_police_exceed->parent = this;
    children["parent-police-exceed"] = parent_police_exceed;

    parent_police_violate->parent = this;
    children["parent-police-violate"] = parent_police_violate;

    police_conform->parent = this;
    children["police-conform"] = police_conform;

    police_exceed->parent = this;
    children["police-exceed"] = police_exceed;

    police_violate->parent = this;
    children["police-violate"] = police_violate;

    yang_name = "mark"; yang_parent_name = "qos-show-ea-st-v2";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::~Mark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_data() const
{
    return (child_mark !=  nullptr && child_mark->has_data())
	|| (parent_mark !=  nullptr && parent_mark->has_data())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_data())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_data())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_data())
	|| (police_conform !=  nullptr && police_conform->has_data())
	|| (police_exceed !=  nullptr && police_exceed->has_data())
	|| (police_violate !=  nullptr && police_violate->has_data());
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::has_operation() const
{
    return is_set(operation)
	|| (child_mark !=  nullptr && child_mark->has_operation())
	|| (parent_mark !=  nullptr && parent_mark->has_operation())
	|| (parent_police_conform !=  nullptr && parent_police_conform->has_operation())
	|| (parent_police_exceed !=  nullptr && parent_police_exceed->has_operation())
	|| (parent_police_violate !=  nullptr && parent_police_violate->has_operation())
	|| (police_conform !=  nullptr && police_conform->has_operation())
	|| (police_exceed !=  nullptr && police_exceed->has_operation())
	|| (police_violate !=  nullptr && police_violate->has_operation());
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "child-mark")
    {
        if(child_mark != nullptr)
        {
            children["child-mark"] = child_mark;
        }
        else
        {
            child_mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark>();
            child_mark->parent = this;
            children["child-mark"] = child_mark;
        }
        return children.at("child-mark");
    }

    if(child_yang_name == "parent-mark")
    {
        if(parent_mark != nullptr)
        {
            children["parent-mark"] = parent_mark;
        }
        else
        {
            parent_mark = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark>();
            parent_mark->parent = this;
            children["parent-mark"] = parent_mark;
        }
        return children.at("parent-mark");
    }

    if(child_yang_name == "parent-police-conform")
    {
        if(parent_police_conform != nullptr)
        {
            children["parent-police-conform"] = parent_police_conform;
        }
        else
        {
            parent_police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform>();
            parent_police_conform->parent = this;
            children["parent-police-conform"] = parent_police_conform;
        }
        return children.at("parent-police-conform");
    }

    if(child_yang_name == "parent-police-exceed")
    {
        if(parent_police_exceed != nullptr)
        {
            children["parent-police-exceed"] = parent_police_exceed;
        }
        else
        {
            parent_police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed>();
            parent_police_exceed->parent = this;
            children["parent-police-exceed"] = parent_police_exceed;
        }
        return children.at("parent-police-exceed");
    }

    if(child_yang_name == "parent-police-violate")
    {
        if(parent_police_violate != nullptr)
        {
            children["parent-police-violate"] = parent_police_violate;
        }
        else
        {
            parent_police_violate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate>();
            parent_police_violate->parent = this;
            children["parent-police-violate"] = parent_police_violate;
        }
        return children.at("parent-police-violate");
    }

    if(child_yang_name == "police-conform")
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform;
        }
        else
        {
            police_conform = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform>();
            police_conform->parent = this;
            children["police-conform"] = police_conform;
        }
        return children.at("police-conform");
    }

    if(child_yang_name == "police-exceed")
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed;
        }
        else
        {
            police_exceed = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed>();
            police_exceed->parent = this;
            children["police-exceed"] = police_exceed;
        }
        return children.at("police-exceed");
    }

    if(child_yang_name == "police-violate")
    {
        if(police_violate != nullptr)
        {
            children["police-violate"] = police_violate;
        }
        else
        {
            police_violate = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate>();
            police_violate->parent = this;
            children["police-violate"] = police_violate;
        }
        return children.at("police-violate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::get_children()
{
    if(children.find("child-mark") == children.end())
    {
        if(child_mark != nullptr)
        {
            children["child-mark"] = child_mark;
        }
    }

    if(children.find("parent-mark") == children.end())
    {
        if(parent_mark != nullptr)
        {
            children["parent-mark"] = parent_mark;
        }
    }

    if(children.find("parent-police-conform") == children.end())
    {
        if(parent_police_conform != nullptr)
        {
            children["parent-police-conform"] = parent_police_conform;
        }
    }

    if(children.find("parent-police-exceed") == children.end())
    {
        if(parent_police_exceed != nullptr)
        {
            children["parent-police-exceed"] = parent_police_exceed;
        }
    }

    if(children.find("parent-police-violate") == children.end())
    {
        if(parent_police_violate != nullptr)
        {
            children["parent-police-violate"] = parent_police_violate;
        }
    }

    if(children.find("police-conform") == children.end())
    {
        if(police_conform != nullptr)
        {
            children["police-conform"] = police_conform;
        }
    }

    if(children.find("police-exceed") == children.end())
    {
        if(police_exceed != nullptr)
        {
            children["police-exceed"] = police_exceed;
        }
    }

    if(children.find("police-violate") == children.end())
    {
        if(police_violate != nullptr)
        {
            children["police-violate"] = police_violate;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::set_value(const std::string & value_path, std::string value)
{
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::ChildMark()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "child-mark"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::~ChildMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChildMark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "child-mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ChildMark::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::PoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-conform"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::~PoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceConform' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::PoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-exceed"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::~PoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceExceed' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::PoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "police-violate"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::~PoliceViolate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-violate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoliceViolate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "police-violate";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::PoliceViolate::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::ParentMark()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-mark"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::~ParentMark()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-mark";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentMark' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentMark::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::ParentPoliceConform()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-conform"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::~ParentPoliceConform()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-conform";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceConform' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-conform";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceConform::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::ParentPoliceExceed()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-exceed"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::~ParentPoliceExceed()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-exceed";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceExceed' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-exceed";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceExceed::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::ParentPoliceViolate()
    :
    action_type{YType::enumeration, "action-type"}
{
    yang_name = "parent-police-violate"; yang_parent_name = "mark";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::~ParentPoliceViolate()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_data() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_data())
            return true;
    }
    return action_type.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::has_operation() const
{
    for (std::size_t index=0; index<mark_detail.size(); index++)
    {
        if(mark_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(action_type.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parent-police-violate";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ParentPoliceViolate' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mark-detail")
    {
        for(auto const & c : mark_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail>();
        c->parent = this;
        mark_detail.push_back(std::move(c));
        children[segment_path] = mark_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::get_children()
{
    for (auto const & c : mark_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-type")
    {
        action_type = value;
    }
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::MarkDetail()
    :
    action_opcode{YType::enumeration, "action-opcode"},
    mark_value{YType::uint8, "mark-value"}
{
    yang_name = "mark-detail"; yang_parent_name = "parent-police-violate";
}

PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::~MarkDetail()
{
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_data() const
{
    return action_opcode.is_set
	|| mark_value.is_set;
}

bool PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(action_opcode.operation)
	|| is_set(mark_value.operation);
}

std::string PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark-detail";

    return path_buffer.str();

}

EntityPath PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MarkDetail' in Cisco_IOS_XR_asr9k_qos_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_opcode.is_set || is_set(action_opcode.operation)) leaf_name_data.push_back(action_opcode.get_name_leafdata());
    if (mark_value.is_set || is_set(mark_value.operation)) leaf_name_data.push_back(mark_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::get_children()
{
    return children;
}

void PlatformQos::Nodes::Node::BundleInterfaces::BundleInterface::BundleInput::MemberInterfaces::MemberInterface::Details::PolicyTyphoon::QosShowEaStV2::Mark::ParentPoliceViolate::MarkDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-opcode")
    {
        action_opcode = value;
    }
    if(value_path == "mark-value")
    {
        mark_value = value;
    }
}


}
}
