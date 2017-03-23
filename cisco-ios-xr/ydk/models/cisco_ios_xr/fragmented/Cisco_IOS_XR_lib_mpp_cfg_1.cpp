
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_1.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_cfg {

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/xr-xml/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::SshProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "ssh-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::~SshProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "ssh-protocol";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/ssh-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::SnmpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "snmp-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::~SnmpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "snmp-protocol";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/snmp-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::TelnetProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "telnet-protocol"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::~TelnetProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "telnet-protocol";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/telnet-protocol/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::AllProtocols()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "all-protocols"; yang_parent_name = "all-interfaces";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::~AllProtocols()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-protocols";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "all-protocols";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v4/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/peers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/outband/interface-selection/all-interfaces/all-protocols/peer-class/peer-v6/peer-prefixes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::Inband()
    :
    interface_selection(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection>())
{
    interface_selection->parent = this;
    children["interface-selection"] = interface_selection;

    yang_name = "inband"; yang_parent_name = "management-plane-protection";
}

ControlPlane::ManagementPlaneProtection::Inband::~Inband()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::has_data() const
{
    return (interface_selection !=  nullptr && interface_selection->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::has_operation() const
{
    return is_set(operation)
	|| (interface_selection !=  nullptr && interface_selection->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inband";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-selection")
    {
        if(interface_selection != nullptr)
        {
            children["interface-selection"] = interface_selection;
        }
        else
        {
            interface_selection = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection>();
            interface_selection->parent = this;
            children["interface-selection"] = interface_selection;
        }
        return children.at("interface-selection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::get_children()
{
    if(children.find("interface-selection") == children.end())
    {
        if(interface_selection != nullptr)
        {
            children["interface-selection"] = interface_selection;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::InterfaceSelection()
    :
    all_interfaces(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces>())
	,interfaces(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces>())
{
    all_interfaces->parent = this;
    children["all-interfaces"] = all_interfaces;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "interface-selection"; yang_parent_name = "inband";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::~InterfaceSelection()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::has_data() const
{
    return (all_interfaces !=  nullptr && all_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::has_operation() const
{
    return is_set(operation)
	|| (all_interfaces !=  nullptr && all_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-selection";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-interfaces")
    {
        if(all_interfaces != nullptr)
        {
            children["all-interfaces"] = all_interfaces;
        }
        else
        {
            all_interfaces = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces>();
            all_interfaces->parent = this;
            children["all-interfaces"] = all_interfaces;
        }
        return children.at("all-interfaces");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::get_children()
{
    if(children.find("all-interfaces") == children.end())
    {
        if(all_interfaces != nullptr)
        {
            children["all-interfaces"] = all_interfaces;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-selection";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::~Interfaces()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    all_protocols(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols>())
	,http_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol>())
	,netconf_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol>())
	,snmp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol>())
	,ssh_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol>())
	,telnet_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol>())
	,tftp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol>())
	,xr_xml(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml>())
{
    all_protocols->parent = this;
    children["all-protocols"] = all_protocols;

    http_protocol->parent = this;
    children["http-protocol"] = http_protocol;

    netconf_protocol->parent = this;
    children["netconf-protocol"] = netconf_protocol;

    snmp_protocol->parent = this;
    children["snmp-protocol"] = snmp_protocol;

    ssh_protocol->parent = this;
    children["ssh-protocol"] = ssh_protocol;

    telnet_protocol->parent = this;
    children["telnet-protocol"] = telnet_protocol;

    tftp_protocol->parent = this;
    children["tftp-protocol"] = tftp_protocol;

    xr_xml->parent = this;
    children["xr-xml"] = xr_xml;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::~Interface()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (all_protocols !=  nullptr && all_protocols->has_data())
	|| (http_protocol !=  nullptr && http_protocol->has_data())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_data())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_data())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_data())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_data())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_data())
	|| (xr_xml !=  nullptr && xr_xml->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (all_protocols !=  nullptr && all_protocols->has_operation())
	|| (http_protocol !=  nullptr && http_protocol->has_operation())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_operation())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_operation())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_operation())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_operation())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_operation())
	|| (xr_xml !=  nullptr && xr_xml->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/interfaces/" << get_segment_path();
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

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-protocols")
    {
        if(all_protocols != nullptr)
        {
            children["all-protocols"] = all_protocols;
        }
        else
        {
            all_protocols = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols>();
            all_protocols->parent = this;
            children["all-protocols"] = all_protocols;
        }
        return children.at("all-protocols");
    }

    if(child_yang_name == "http-protocol")
    {
        if(http_protocol != nullptr)
        {
            children["http-protocol"] = http_protocol;
        }
        else
        {
            http_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol>();
            http_protocol->parent = this;
            children["http-protocol"] = http_protocol;
        }
        return children.at("http-protocol");
    }

    if(child_yang_name == "netconf-protocol")
    {
        if(netconf_protocol != nullptr)
        {
            children["netconf-protocol"] = netconf_protocol;
        }
        else
        {
            netconf_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol>();
            netconf_protocol->parent = this;
            children["netconf-protocol"] = netconf_protocol;
        }
        return children.at("netconf-protocol");
    }

    if(child_yang_name == "snmp-protocol")
    {
        if(snmp_protocol != nullptr)
        {
            children["snmp-protocol"] = snmp_protocol;
        }
        else
        {
            snmp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol>();
            snmp_protocol->parent = this;
            children["snmp-protocol"] = snmp_protocol;
        }
        return children.at("snmp-protocol");
    }

    if(child_yang_name == "ssh-protocol")
    {
        if(ssh_protocol != nullptr)
        {
            children["ssh-protocol"] = ssh_protocol;
        }
        else
        {
            ssh_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol>();
            ssh_protocol->parent = this;
            children["ssh-protocol"] = ssh_protocol;
        }
        return children.at("ssh-protocol");
    }

    if(child_yang_name == "telnet-protocol")
    {
        if(telnet_protocol != nullptr)
        {
            children["telnet-protocol"] = telnet_protocol;
        }
        else
        {
            telnet_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol>();
            telnet_protocol->parent = this;
            children["telnet-protocol"] = telnet_protocol;
        }
        return children.at("telnet-protocol");
    }

    if(child_yang_name == "tftp-protocol")
    {
        if(tftp_protocol != nullptr)
        {
            children["tftp-protocol"] = tftp_protocol;
        }
        else
        {
            tftp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol>();
            tftp_protocol->parent = this;
            children["tftp-protocol"] = tftp_protocol;
        }
        return children.at("tftp-protocol");
    }

    if(child_yang_name == "xr-xml")
    {
        if(xr_xml != nullptr)
        {
            children["xr-xml"] = xr_xml;
        }
        else
        {
            xr_xml = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml>();
            xr_xml->parent = this;
            children["xr-xml"] = xr_xml;
        }
        return children.at("xr-xml");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::get_children()
{
    if(children.find("all-protocols") == children.end())
    {
        if(all_protocols != nullptr)
        {
            children["all-protocols"] = all_protocols;
        }
    }

    if(children.find("http-protocol") == children.end())
    {
        if(http_protocol != nullptr)
        {
            children["http-protocol"] = http_protocol;
        }
    }

    if(children.find("netconf-protocol") == children.end())
    {
        if(netconf_protocol != nullptr)
        {
            children["netconf-protocol"] = netconf_protocol;
        }
    }

    if(children.find("snmp-protocol") == children.end())
    {
        if(snmp_protocol != nullptr)
        {
            children["snmp-protocol"] = snmp_protocol;
        }
    }

    if(children.find("ssh-protocol") == children.end())
    {
        if(ssh_protocol != nullptr)
        {
            children["ssh-protocol"] = ssh_protocol;
        }
    }

    if(children.find("telnet-protocol") == children.end())
    {
        if(telnet_protocol != nullptr)
        {
            children["telnet-protocol"] = telnet_protocol;
        }
    }

    if(children.find("tftp-protocol") == children.end())
    {
        if(tftp_protocol != nullptr)
        {
            children["tftp-protocol"] = tftp_protocol;
        }
    }

    if(children.find("xr-xml") == children.end())
    {
        if(xr_xml != nullptr)
        {
            children["xr-xml"] = xr_xml;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::HttpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "http-protocol"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::~HttpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HttpProtocol' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "http-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::TftpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "tftp-protocol"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::~TftpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TftpProtocol' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "tftp-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::NetconfProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "netconf-protocol"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::~NetconfProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetconfProtocol' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "netconf-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::XrXml()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "xr-xml"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::~XrXml()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xr-xml";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XrXml' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "xr-xml";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::SshProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "ssh-protocol"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::~SshProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SshProtocol' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "ssh-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::SnmpProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "snmp-protocol"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::~SnmpProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SnmpProtocol' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "snmp-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::TelnetProtocol()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "telnet-protocol"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::~TelnetProtocol()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet-protocol";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TelnetProtocol' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "telnet-protocol";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::AllProtocols()
    :
    peer_class(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass>())
{
    peer_class->parent = this;
    children["peer-class"] = peer_class;

    yang_name = "all-protocols"; yang_parent_name = "interface";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::~AllProtocols()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::has_data() const
{
    return (peer_class !=  nullptr && peer_class->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::has_operation() const
{
    return is_set(operation)
	|| (peer_class !=  nullptr && peer_class->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-protocols";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllProtocols' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-class")
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
        else
        {
            peer_class = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass>();
            peer_class->parent = this;
            children["peer-class"] = peer_class;
        }
        return children.at("peer-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::get_children()
{
    if(children.find("peer-class") == children.end())
    {
        if(peer_class != nullptr)
        {
            children["peer-class"] = peer_class;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerClass()
    :
    peer_all{YType::empty, "peer-all"}
    	,
    peer_v4(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4>())
	,peer_v6(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6>())
{
    peer_v4->parent = this;
    children["peer-v4"] = peer_v4;

    peer_v6->parent = this;
    children["peer-v6"] = peer_v6;

    yang_name = "peer-class"; yang_parent_name = "all-protocols";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::~PeerClass()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::has_data() const
{
    return peer_all.is_set
	|| (peer_v4 !=  nullptr && peer_v4->has_data())
	|| (peer_v6 !=  nullptr && peer_v6->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_all.operation)
	|| (peer_v4 !=  nullptr && peer_v4->has_operation())
	|| (peer_v6 !=  nullptr && peer_v6->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-class";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerClass' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_all.is_set || is_set(peer_all.operation)) leaf_name_data.push_back(peer_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-v4")
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
        else
        {
            peer_v4 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4>();
            peer_v4->parent = this;
            children["peer-v4"] = peer_v4;
        }
        return children.at("peer-v4");
    }

    if(child_yang_name == "peer-v6")
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
        else
        {
            peer_v6 = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6>();
            peer_v6->parent = this;
            children["peer-v6"] = peer_v6;
        }
        return children.at("peer-v6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::get_children()
{
    if(children.find("peer-v4") == children.end())
    {
        if(peer_v4 != nullptr)
        {
            children["peer-v4"] = peer_v4;
        }
    }

    if(children.find("peer-v6") == children.end())
    {
        if(peer_v6 != nullptr)
        {
            children["peer-v6"] = peer_v6;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-all")
    {
        peer_all = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerV4()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v4"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::~PeerV4()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v4";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV4' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v4";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerV6()
    :
    peer_prefixes(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes>())
	,peers(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers>())
{
    peer_prefixes->parent = this;
    children["peer-prefixes"] = peer_prefixes;

    peers->parent = this;
    children["peers"] = peers;

    yang_name = "peer-v6"; yang_parent_name = "peer-class";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::~PeerV6()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::has_data() const
{
    return (peer_prefixes !=  nullptr && peer_prefixes->has_data())
	|| (peers !=  nullptr && peers->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::has_operation() const
{
    return is_set(operation)
	|| (peer_prefixes !=  nullptr && peer_prefixes->has_operation())
	|| (peers !=  nullptr && peers->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-v6";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerV6' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefixes")
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
        else
        {
            peer_prefixes = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes>();
            peer_prefixes->parent = this;
            children["peer-prefixes"] = peer_prefixes;
        }
        return children.at("peer-prefixes");
    }

    if(child_yang_name == "peers")
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
        else
        {
            peers = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers>();
            peers->parent = this;
            children["peers"] = peers;
        }
        return children.at("peers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::get_children()
{
    if(children.find("peer-prefixes") == children.end())
    {
        if(peer_prefixes != nullptr)
        {
            children["peer-prefixes"] = peer_prefixes;
        }
    }

    if(children.find("peers") == children.end())
    {
        if(peers != nullptr)
        {
            children["peers"] = peers;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peers()
{
    yang_name = "peers"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::~Peers()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::Peer()
    :
    address{YType::str, "address"}
{
    yang_name = "peer"; yang_parent_name = "peers";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::~Peer()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_data() const
{
    return address.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefixes()
{
    yang_name = "peer-prefixes"; yang_parent_name = "peer-v6";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::~PeerPrefixes()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_data() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::has_operation() const
{
    for (std::size_t index=0; index<peer_prefix.size(); index++)
    {
        if(peer_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefixes";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefixes' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-prefix")
    {
        for(auto const & c : peer_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix>();
        c->parent = this;
        peer_prefix.push_back(std::move(c));
        children[segment_path] = peer_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::get_children()
{
    for (auto const & c : peer_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::set_value(const std::string & value_path, std::string value)
{
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::PeerPrefix()
    :
    address_prefix{YType::str, "address-prefix"}
{
    yang_name = "peer-prefix"; yang_parent_name = "peer-prefixes";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::~PeerPrefix()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_data() const
{
    return address_prefix.is_set;
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(address_prefix.operation);
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-prefix" <<"[address-prefix='" <<address_prefix <<"']";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerPrefix' in Cisco_IOS_XR_lib_mpp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_prefix.is_set || is_set(address_prefix.operation)) leaf_name_data.push_back(address_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::get_children()
{
    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-prefix")
    {
        address_prefix = value;
    }
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllInterfaces()
    :
    all_protocols(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols>())
	,http_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol>())
	,netconf_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol>())
	,snmp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol>())
	,ssh_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol>())
	,telnet_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol>())
	,tftp_protocol(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol>())
	,xr_xml(std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml>())
{
    all_protocols->parent = this;
    children["all-protocols"] = all_protocols;

    http_protocol->parent = this;
    children["http-protocol"] = http_protocol;

    netconf_protocol->parent = this;
    children["netconf-protocol"] = netconf_protocol;

    snmp_protocol->parent = this;
    children["snmp-protocol"] = snmp_protocol;

    ssh_protocol->parent = this;
    children["ssh-protocol"] = ssh_protocol;

    telnet_protocol->parent = this;
    children["telnet-protocol"] = telnet_protocol;

    tftp_protocol->parent = this;
    children["tftp-protocol"] = tftp_protocol;

    xr_xml->parent = this;
    children["xr-xml"] = xr_xml;

    yang_name = "all-interfaces"; yang_parent_name = "interface-selection";
}

ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::~AllInterfaces()
{
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::has_data() const
{
    return (all_protocols !=  nullptr && all_protocols->has_data())
	|| (http_protocol !=  nullptr && http_protocol->has_data())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_data())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_data())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_data())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_data())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_data())
	|| (xr_xml !=  nullptr && xr_xml->has_data());
}

bool ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::has_operation() const
{
    return is_set(operation)
	|| (all_protocols !=  nullptr && all_protocols->has_operation())
	|| (http_protocol !=  nullptr && http_protocol->has_operation())
	|| (netconf_protocol !=  nullptr && netconf_protocol->has_operation())
	|| (snmp_protocol !=  nullptr && snmp_protocol->has_operation())
	|| (ssh_protocol !=  nullptr && ssh_protocol->has_operation())
	|| (telnet_protocol !=  nullptr && telnet_protocol->has_operation())
	|| (tftp_protocol !=  nullptr && tftp_protocol->has_operation())
	|| (xr_xml !=  nullptr && xr_xml->has_operation());
}

std::string ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-interfaces";

    return path_buffer.str();

}

EntityPath ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-lib-mpp-cfg:control-plane/management-plane-protection/inband/interface-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-protocols")
    {
        if(all_protocols != nullptr)
        {
            children["all-protocols"] = all_protocols;
        }
        else
        {
            all_protocols = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols>();
            all_protocols->parent = this;
            children["all-protocols"] = all_protocols;
        }
        return children.at("all-protocols");
    }

    if(child_yang_name == "http-protocol")
    {
        if(http_protocol != nullptr)
        {
            children["http-protocol"] = http_protocol;
        }
        else
        {
            http_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol>();
            http_protocol->parent = this;
            children["http-protocol"] = http_protocol;
        }
        return children.at("http-protocol");
    }

    if(child_yang_name == "netconf-protocol")
    {
        if(netconf_protocol != nullptr)
        {
            children["netconf-protocol"] = netconf_protocol;
        }
        else
        {
            netconf_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol>();
            netconf_protocol->parent = this;
            children["netconf-protocol"] = netconf_protocol;
        }
        return children.at("netconf-protocol");
    }

    if(child_yang_name == "snmp-protocol")
    {
        if(snmp_protocol != nullptr)
        {
            children["snmp-protocol"] = snmp_protocol;
        }
        else
        {
            snmp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol>();
            snmp_protocol->parent = this;
            children["snmp-protocol"] = snmp_protocol;
        }
        return children.at("snmp-protocol");
    }

    if(child_yang_name == "ssh-protocol")
    {
        if(ssh_protocol != nullptr)
        {
            children["ssh-protocol"] = ssh_protocol;
        }
        else
        {
            ssh_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol>();
            ssh_protocol->parent = this;
            children["ssh-protocol"] = ssh_protocol;
        }
        return children.at("ssh-protocol");
    }

    if(child_yang_name == "telnet-protocol")
    {
        if(telnet_protocol != nullptr)
        {
            children["telnet-protocol"] = telnet_protocol;
        }
        else
        {
            telnet_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol>();
            telnet_protocol->parent = this;
            children["telnet-protocol"] = telnet_protocol;
        }
        return children.at("telnet-protocol");
    }

    if(child_yang_name == "tftp-protocol")
    {
        if(tftp_protocol != nullptr)
        {
            children["tftp-protocol"] = tftp_protocol;
        }
        else
        {
            tftp_protocol = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol>();
            tftp_protocol->parent = this;
            children["tftp-protocol"] = tftp_protocol;
        }
        return children.at("tftp-protocol");
    }

    if(child_yang_name == "xr-xml")
    {
        if(xr_xml != nullptr)
        {
            children["xr-xml"] = xr_xml;
        }
        else
        {
            xr_xml = std::make_shared<ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml>();
            xr_xml->parent = this;
            children["xr-xml"] = xr_xml;
        }
        return children.at("xr-xml");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::get_children()
{
    if(children.find("all-protocols") == children.end())
    {
        if(all_protocols != nullptr)
        {
            children["all-protocols"] = all_protocols;
        }
    }

    if(children.find("http-protocol") == children.end())
    {
        if(http_protocol != nullptr)
        {
            children["http-protocol"] = http_protocol;
        }
    }

    if(children.find("netconf-protocol") == children.end())
    {
        if(netconf_protocol != nullptr)
        {
            children["netconf-protocol"] = netconf_protocol;
        }
    }

    if(children.find("snmp-protocol") == children.end())
    {
        if(snmp_protocol != nullptr)
        {
            children["snmp-protocol"] = snmp_protocol;
        }
    }

    if(children.find("ssh-protocol") == children.end())
    {
        if(ssh_protocol != nullptr)
        {
            children["ssh-protocol"] = ssh_protocol;
        }
    }

    if(children.find("telnet-protocol") == children.end())
    {
        if(telnet_protocol != nullptr)
        {
            children["telnet-protocol"] = telnet_protocol;
        }
    }

    if(children.find("tftp-protocol") == children.end())
    {
        if(tftp_protocol != nullptr)
        {
            children["tftp-protocol"] = tftp_protocol;
        }
    }

    if(children.find("xr-xml") == children.end())
    {
        if(xr_xml != nullptr)
        {
            children["xr-xml"] = xr_xml;
        }
    }

    return children;
}

void ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::set_value(const std::string & value_path, std::string value)
{
}


}
}
