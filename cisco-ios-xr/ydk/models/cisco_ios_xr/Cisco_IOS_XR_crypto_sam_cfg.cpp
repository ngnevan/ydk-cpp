
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_sam_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_sam_cfg {

Crypto::Crypto()
    :
    sam(std::make_shared<Crypto::Sam>())
	,ssh(std::make_shared<Crypto::Ssh>())
{
    sam->parent = this;
    ssh->parent = this;

    yang_name = "crypto"; yang_parent_name = "Cisco-IOS-XR-crypto-sam-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Crypto::~Crypto()
{
}

bool Crypto::has_data() const
{
    return (sam !=  nullptr && sam->has_data())
	|| (ssh !=  nullptr && ssh->has_data());
}

bool Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (sam !=  nullptr && sam->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation());
}

std::string Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sam")
    {
        if(sam == nullptr)
        {
            sam = std::make_shared<Crypto::Sam>();
        }
        return sam;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Crypto::Ssh>();
        }
        return ssh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sam != nullptr)
    {
        children["sam"] = sam;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    return children;
}

void Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Crypto::clone_ptr() const
{
    return std::make_shared<Crypto>();
}

std::string Crypto::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Crypto::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Crypto::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Crypto::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sam" || name == "ssh")
        return true;
    return false;
}

Crypto::Sam::Sam()
    :
    prompt_interval(nullptr) // presence node
{

    yang_name = "sam"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Sam::~Sam()
{
}

bool Crypto::Sam::has_data() const
{
    return (prompt_interval !=  nullptr && prompt_interval->has_data());
}

bool Crypto::Sam::has_operation() const
{
    return is_set(yfilter)
	|| (prompt_interval !=  nullptr && prompt_interval->has_operation());
}

std::string Crypto::Sam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Sam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Sam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Sam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt-interval")
    {
        if(prompt_interval == nullptr)
        {
            prompt_interval = std::make_shared<Crypto::Sam::PromptInterval>();
        }
        return prompt_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Sam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prompt_interval != nullptr)
    {
        children["prompt-interval"] = prompt_interval;
    }

    return children;
}

void Crypto::Sam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Sam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Sam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt-interval")
        return true;
    return false;
}

Crypto::Sam::PromptInterval::PromptInterval()
    :
    action{YType::enumeration, "action"},
    prompt_time{YType::uint32, "prompt-time"}
{

    yang_name = "prompt-interval"; yang_parent_name = "sam"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Sam::PromptInterval::~PromptInterval()
{
}

bool Crypto::Sam::PromptInterval::has_data() const
{
    return action.is_set
	|| prompt_time.is_set;
}

bool Crypto::Sam::PromptInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(prompt_time.yfilter);
}

std::string Crypto::Sam::PromptInterval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/sam/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Sam::PromptInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Sam::PromptInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (prompt_time.is_set || is_set(prompt_time.yfilter)) leaf_name_data.push_back(prompt_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Sam::PromptInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Sam::PromptInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Sam::PromptInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prompt-time")
    {
        prompt_time = value;
        prompt_time.value_namespace = name_space;
        prompt_time.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Sam::PromptInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "prompt-time")
    {
        prompt_time.yfilter = yfilter;
    }
}

bool Crypto::Sam::PromptInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "prompt-time")
        return true;
    return false;
}

Crypto::Ssh::Ssh()
    :
    client(std::make_shared<Crypto::Ssh::Client>())
	,server(std::make_shared<Crypto::Ssh::Server>())
{
    client->parent = this;
    server->parent = this;

    yang_name = "ssh"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::~Ssh()
{
}

bool Crypto::Ssh::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Crypto::Ssh::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Crypto::Ssh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-cfg:ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Crypto::Ssh::Client>();
        }
        return client;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Crypto::Ssh::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Crypto::Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server")
        return true;
    return false;
}

Crypto::Ssh::Client::Client()
    :
    rekey_volume{YType::uint32, "rekey-volume"},
    host_public_key{YType::str, "host-public-key"},
    client_vrf{YType::str, "client-vrf"},
    rekey_time{YType::uint32, "rekey-time"},
    source_interface{YType::str, "source-interface"},
    dscp{YType::uint32, "dscp"}
    	,
    client_enable(std::make_shared<Crypto::Ssh::Client::ClientEnable>())
{
    client_enable->parent = this;

    yang_name = "client"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Client::~Client()
{
}

bool Crypto::Ssh::Client::has_data() const
{
    return rekey_volume.is_set
	|| host_public_key.is_set
	|| client_vrf.is_set
	|| rekey_time.is_set
	|| source_interface.is_set
	|| dscp.is_set
	|| (client_enable !=  nullptr && client_enable->has_data());
}

bool Crypto::Ssh::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_volume.yfilter)
	|| ydk::is_set(host_public_key.yfilter)
	|| ydk::is_set(client_vrf.yfilter)
	|| ydk::is_set(rekey_time.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (client_enable !=  nullptr && client_enable->has_operation());
}

std::string Crypto::Ssh::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_volume.is_set || is_set(rekey_volume.yfilter)) leaf_name_data.push_back(rekey_volume.get_name_leafdata());
    if (host_public_key.is_set || is_set(host_public_key.yfilter)) leaf_name_data.push_back(host_public_key.get_name_leafdata());
    if (client_vrf.is_set || is_set(client_vrf.yfilter)) leaf_name_data.push_back(client_vrf.get_name_leafdata());
    if (rekey_time.is_set || is_set(rekey_time.yfilter)) leaf_name_data.push_back(rekey_time.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-enable")
    {
        if(client_enable == nullptr)
        {
            client_enable = std::make_shared<Crypto::Ssh::Client::ClientEnable>();
        }
        return client_enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_enable != nullptr)
    {
        children["client-enable"] = client_enable;
    }

    return children;
}

void Crypto::Ssh::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume = value;
        rekey_volume.value_namespace = name_space;
        rekey_volume.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-public-key")
    {
        host_public_key = value;
        host_public_key.value_namespace = name_space;
        host_public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-vrf")
    {
        client_vrf = value;
        client_vrf.value_namespace = name_space;
        client_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rekey-time")
    {
        rekey_time = value;
        rekey_time.value_namespace = name_space;
        rekey_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume.yfilter = yfilter;
    }
    if(value_path == "host-public-key")
    {
        host_public_key.yfilter = yfilter;
    }
    if(value_path == "client-vrf")
    {
        client_vrf.yfilter = yfilter;
    }
    if(value_path == "rekey-time")
    {
        rekey_time.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-enable" || name == "rekey-volume" || name == "host-public-key" || name == "client-vrf" || name == "rekey-time" || name == "source-interface" || name == "dscp")
        return true;
    return false;
}

Crypto::Ssh::Client::ClientEnable::ClientEnable()
    :
    client_cipher(std::make_shared<Crypto::Ssh::Client::ClientEnable::ClientCipher>())
{
    client_cipher->parent = this;

    yang_name = "client-enable"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Client::ClientEnable::~ClientEnable()
{
}

bool Crypto::Ssh::Client::ClientEnable::has_data() const
{
    return (client_cipher !=  nullptr && client_cipher->has_data());
}

bool Crypto::Ssh::Client::ClientEnable::has_operation() const
{
    return is_set(yfilter)
	|| (client_cipher !=  nullptr && client_cipher->has_operation());
}

std::string Crypto::Ssh::Client::ClientEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Client::ClientEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Client::ClientEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Client::ClientEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-cipher")
    {
        if(client_cipher == nullptr)
        {
            client_cipher = std::make_shared<Crypto::Ssh::Client::ClientEnable::ClientCipher>();
        }
        return client_cipher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Client::ClientEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_cipher != nullptr)
    {
        children["client-cipher"] = client_cipher;
    }

    return children;
}

void Crypto::Ssh::Client::ClientEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Ssh::Client::ClientEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Ssh::Client::ClientEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-cipher")
        return true;
    return false;
}

Crypto::Ssh::Client::ClientEnable::ClientCipher::ClientCipher()
    :
    aescbc{YType::boolean, "aescbc"}
{

    yang_name = "client-cipher"; yang_parent_name = "client-enable"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Client::ClientEnable::ClientCipher::~ClientCipher()
{
}

bool Crypto::Ssh::Client::ClientEnable::ClientCipher::has_data() const
{
    return aescbc.is_set;
}

bool Crypto::Ssh::Client::ClientEnable::ClientCipher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aescbc.yfilter);
}

std::string Crypto::Ssh::Client::ClientEnable::ClientCipher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/client/client-enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Client::ClientEnable::ClientCipher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-cipher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Client::ClientEnable::ClientCipher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aescbc.is_set || is_set(aescbc.yfilter)) leaf_name_data.push_back(aescbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Client::ClientEnable::ClientCipher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Client::ClientEnable::ClientCipher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Client::ClientEnable::ClientCipher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aescbc")
    {
        aescbc = value;
        aescbc.value_namespace = name_space;
        aescbc.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Client::ClientEnable::ClientCipher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aescbc")
    {
        aescbc.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Client::ClientEnable::ClientCipher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aescbc")
        return true;
    return false;
}

Crypto::Ssh::Server::Server()
    :
    rekey_volume{YType::uint32, "rekey-volume"},
    session_limit{YType::uint32, "session-limit"},
    netconf{YType::uint32, "netconf"},
    v2{YType::empty, "v2"},
    rekey_time{YType::uint32, "rekey-time"},
    logging{YType::empty, "logging"},
    rate_limit{YType::uint32, "rate-limit"},
    timeout{YType::uint32, "timeout"},
    dscp{YType::uint32, "dscp"}
    	,
    disable(std::make_shared<Crypto::Ssh::Server::Disable>())
	,enable(std::make_shared<Crypto::Ssh::Server::Enable>())
	,vrf_table(std::make_shared<Crypto::Ssh::Server::VrfTable>())
	,capability(std::make_shared<Crypto::Ssh::Server::Capability>())
	,netconf_vrf_table(std::make_shared<Crypto::Ssh::Server::NetconfVrfTable>())
{
    disable->parent = this;
    enable->parent = this;
    vrf_table->parent = this;
    capability->parent = this;
    netconf_vrf_table->parent = this;

    yang_name = "server"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::~Server()
{
}

bool Crypto::Ssh::Server::has_data() const
{
    return rekey_volume.is_set
	|| session_limit.is_set
	|| netconf.is_set
	|| v2.is_set
	|| rekey_time.is_set
	|| logging.is_set
	|| rate_limit.is_set
	|| timeout.is_set
	|| dscp.is_set
	|| (disable !=  nullptr && disable->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_data());
}

bool Crypto::Ssh::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_volume.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(netconf.yfilter)
	|| ydk::is_set(v2.yfilter)
	|| ydk::is_set(rekey_time.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (disable !=  nullptr && disable->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (netconf_vrf_table !=  nullptr && netconf_vrf_table->has_operation());
}

std::string Crypto::Ssh::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_volume.is_set || is_set(rekey_volume.yfilter)) leaf_name_data.push_back(rekey_volume.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (netconf.is_set || is_set(netconf.yfilter)) leaf_name_data.push_back(netconf.get_name_leafdata());
    if (v2.is_set || is_set(v2.yfilter)) leaf_name_data.push_back(v2.get_name_leafdata());
    if (rekey_time.is_set || is_set(rekey_time.yfilter)) leaf_name_data.push_back(rekey_time.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Crypto::Ssh::Server::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Crypto::Ssh::Server::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Crypto::Ssh::Server::VrfTable>();
        }
        return vrf_table;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Crypto::Ssh::Server::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "netconf-vrf-table")
    {
        if(netconf_vrf_table == nullptr)
        {
            netconf_vrf_table = std::make_shared<Crypto::Ssh::Server::NetconfVrfTable>();
        }
        return netconf_vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(netconf_vrf_table != nullptr)
    {
        children["netconf-vrf-table"] = netconf_vrf_table;
    }

    return children;
}

void Crypto::Ssh::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume = value;
        rekey_volume.value_namespace = name_space;
        rekey_volume.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netconf")
    {
        netconf = value;
        netconf.value_namespace = name_space;
        netconf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v2")
    {
        v2 = value;
        v2.value_namespace = name_space;
        v2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rekey-time")
    {
        rekey_time = value;
        rekey_time.value_namespace = name_space;
        rekey_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-volume")
    {
        rekey_volume.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "netconf")
    {
        netconf.yfilter = yfilter;
    }
    if(value_path == "v2")
    {
        v2.yfilter = yfilter;
    }
    if(value_path == "rekey-time")
    {
        rekey_time.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable" || name == "vrf-table" || name == "capability" || name == "netconf-vrf-table" || name == "rekey-volume" || name == "session-limit" || name == "netconf" || name == "v2" || name == "rekey-time" || name == "logging" || name == "rate-limit" || name == "timeout" || name == "dscp")
        return true;
    return false;
}

Crypto::Ssh::Server::Disable::Disable()
    :
    hmac(std::make_shared<Crypto::Ssh::Server::Disable::Hmac>())
{
    hmac->parent = this;

    yang_name = "disable"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::Disable::~Disable()
{
}

bool Crypto::Ssh::Server::Disable::has_data() const
{
    return (hmac !=  nullptr && hmac->has_data());
}

bool Crypto::Ssh::Server::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (hmac !=  nullptr && hmac->has_operation());
}

std::string Crypto::Ssh::Server::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac")
    {
        if(hmac == nullptr)
        {
            hmac = std::make_shared<Crypto::Ssh::Server::Disable::Hmac>();
        }
        return hmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hmac != nullptr)
    {
        children["hmac"] = hmac;
    }

    return children;
}

void Crypto::Ssh::Server::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Ssh::Server::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Ssh::Server::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac")
        return true;
    return false;
}

Crypto::Ssh::Server::Disable::Hmac::Hmac()
    :
    hmac_sha512{YType::boolean, "hmac-sha512"}
{

    yang_name = "hmac"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::Disable::Hmac::~Hmac()
{
}

bool Crypto::Ssh::Server::Disable::Hmac::has_data() const
{
    return hmac_sha512.is_set;
}

bool Crypto::Ssh::Server::Disable::Hmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha512.yfilter);
}

std::string Crypto::Ssh::Server::Disable::Hmac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::Disable::Hmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::Disable::Hmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha512.is_set || is_set(hmac_sha512.yfilter)) leaf_name_data.push_back(hmac_sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Disable::Hmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Disable::Hmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::Disable::Hmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha512")
    {
        hmac_sha512 = value;
        hmac_sha512.value_namespace = name_space;
        hmac_sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Server::Disable::Hmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha512")
    {
        hmac_sha512.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Server::Disable::Hmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha512")
        return true;
    return false;
}

Crypto::Ssh::Server::Enable::Enable()
    :
    cipher(std::make_shared<Crypto::Ssh::Server::Enable::Cipher>())
{
    cipher->parent = this;

    yang_name = "enable"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::Enable::~Enable()
{
}

bool Crypto::Ssh::Server::Enable::has_data() const
{
    return (cipher !=  nullptr && cipher->has_data());
}

bool Crypto::Ssh::Server::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (cipher !=  nullptr && cipher->has_operation());
}

std::string Crypto::Ssh::Server::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipher")
    {
        if(cipher == nullptr)
        {
            cipher = std::make_shared<Crypto::Ssh::Server::Enable::Cipher>();
        }
        return cipher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipher != nullptr)
    {
        children["cipher"] = cipher;
    }

    return children;
}

void Crypto::Ssh::Server::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Ssh::Server::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Ssh::Server::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipher")
        return true;
    return false;
}

Crypto::Ssh::Server::Enable::Cipher::Cipher()
    :
    aescbc{YType::boolean, "aescbc"}
{

    yang_name = "cipher"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::Enable::Cipher::~Cipher()
{
}

bool Crypto::Ssh::Server::Enable::Cipher::has_data() const
{
    return aescbc.is_set;
}

bool Crypto::Ssh::Server::Enable::Cipher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aescbc.yfilter);
}

std::string Crypto::Ssh::Server::Enable::Cipher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::Enable::Cipher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::Enable::Cipher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aescbc.is_set || is_set(aescbc.yfilter)) leaf_name_data.push_back(aescbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Enable::Cipher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Enable::Cipher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::Enable::Cipher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aescbc")
    {
        aescbc = value;
        aescbc.value_namespace = name_space;
        aescbc.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Server::Enable::Cipher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aescbc")
    {
        aescbc.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Server::Enable::Cipher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aescbc")
        return true;
    return false;
}

Crypto::Ssh::Server::VrfTable::VrfTable()
{

    yang_name = "vrf-table"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::VrfTable::~VrfTable()
{
}

bool Crypto::Ssh::Server::VrfTable::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Crypto::Ssh::Server::VrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Crypto::Ssh::Server::VrfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Crypto::Ssh::Server::VrfTable::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Crypto::Ssh::Server::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Ssh::Server::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Ssh::Server::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Crypto::Ssh::Server::VrfTable::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    ipv6_access_list{YType::str, "ipv6-access-list"}
{

    yang_name = "vrf"; yang_parent_name = "vrf-table"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::VrfTable::Vrf::~Vrf()
{
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ipv4_access_list.yfilter)
	|| ydk::is_set(ipv6_access_list.yfilter);
}

std::string Crypto::Ssh::Server::VrfTable::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/vrf-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::VrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::VrfTable::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.yfilter)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.yfilter)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::VrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::VrfTable::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::VrfTable::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
        ipv4_access_list.value_namespace = name_space;
        ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
        ipv6_access_list.value_namespace = name_space;
        ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Server::VrfTable::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Server::VrfTable::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "enable" || name == "ipv4-access-list" || name == "ipv6-access-list")
        return true;
    return false;
}

Crypto::Ssh::Server::Capability::Capability()
    :
    netconf_xml{YType::boolean, "netconf-xml"}
{

    yang_name = "capability"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::Capability::~Capability()
{
}

bool Crypto::Ssh::Server::Capability::has_data() const
{
    return netconf_xml.is_set;
}

bool Crypto::Ssh::Server::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netconf_xml.yfilter);
}

std::string Crypto::Ssh::Server::Capability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netconf_xml.is_set || is_set(netconf_xml.yfilter)) leaf_name_data.push_back(netconf_xml.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netconf-xml")
    {
        netconf_xml = value;
        netconf_xml.value_namespace = name_space;
        netconf_xml.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Server::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netconf-xml")
    {
        netconf_xml.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Server::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netconf-xml")
        return true;
    return false;
}

Crypto::Ssh::Server::NetconfVrfTable::NetconfVrfTable()
{

    yang_name = "netconf-vrf-table"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::NetconfVrfTable::~NetconfVrfTable()
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Crypto::Ssh::Server::NetconfVrfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::NetconfVrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netconf-vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::NetconfVrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::NetconfVrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Crypto::Ssh::Server::NetconfVrfTable::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::NetconfVrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Crypto::Ssh::Server::NetconfVrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Crypto::Ssh::Server::NetconfVrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Crypto::Ssh::Server::NetconfVrfTable::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    enable{YType::empty, "enable"},
    ipv4_access_list{YType::str, "ipv4-access-list"},
    ipv6_access_list{YType::str, "ipv6-access-list"}
{

    yang_name = "vrf"; yang_parent_name = "netconf-vrf-table"; is_top_level_class = false; has_list_ancestor = false;
}

Crypto::Ssh::Server::NetconfVrfTable::Vrf::~Vrf()
{
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| ipv4_access_list.is_set
	|| ipv6_access_list.is_set;
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(ipv4_access_list.yfilter)
	|| ydk::is_set(ipv6_access_list.yfilter);
}

std::string Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-sam-cfg:crypto/Cisco-IOS-XR-crypto-ssh-cfg:ssh/server/netconf-vrf-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_access_list.is_set || is_set(ipv4_access_list.yfilter)) leaf_name_data.push_back(ipv4_access_list.get_name_leafdata());
    if (ipv6_access_list.is_set || is_set(ipv6_access_list.yfilter)) leaf_name_data.push_back(ipv6_access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Crypto::Ssh::Server::NetconfVrfTable::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Crypto::Ssh::Server::NetconfVrfTable::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list = value;
        ipv4_access_list.value_namespace = name_space;
        ipv4_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list = value;
        ipv6_access_list.value_namespace = name_space;
        ipv6_access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Crypto::Ssh::Server::NetconfVrfTable::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "ipv4-access-list")
    {
        ipv4_access_list.yfilter = yfilter;
    }
    if(value_path == "ipv6-access-list")
    {
        ipv6_access_list.yfilter = yfilter;
    }
}

bool Crypto::Ssh::Server::NetconfVrfTable::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "enable" || name == "ipv4-access-list" || name == "ipv6-access-list")
        return true;
    return false;
}

const Enum::YLeaf CryptoSamAction::proceed {1, "proceed"};
const Enum::YLeaf CryptoSamAction::terminate {2, "terminate"};


}
}

