#ifndef _CISCO_IPSEC_FLOW_MONITOR_MIB_
#define _CISCO_IPSEC_FLOW_MONITOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSEC_FLOW_MONITOR_MIB {

class CISCOIPSECFLOWMONITORMIB : public ydk::Entity
{
    public:
        CISCOIPSECFLOWMONITORMIB();
        ~CISCOIPSECFLOWMONITORMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cipseclevels; //type: CISCOIPSECFLOWMONITORMIB::Cipseclevels
        class Cikeglobalstats; //type: CISCOIPSECFLOWMONITORMIB::Cikeglobalstats
        class Cipsecglobalstats; //type: CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats
        class Cipsechistglobalcntl; //type: CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl
        class Cipsecfailglobalcntl; //type: CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl
        class Cipsectrapcntl; //type: CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl
        class Cikepeertable; //type: CISCOIPSECFLOWMONITORMIB::Cikepeertable
        class Ciketunneltable; //type: CISCOIPSECFLOWMONITORMIB::Ciketunneltable
        class Cikepeercorrtable; //type: CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable
        class Cikephase1Gwstatstable; //type: CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable
        class Cipsectunneltable; //type: CISCOIPSECFLOWMONITORMIB::Cipsectunneltable
        class Cipsecendpttable; //type: CISCOIPSECFLOWMONITORMIB::Cipsecendpttable
        class Cipsecspitable; //type: CISCOIPSECFLOWMONITORMIB::Cipsecspitable
        class Cipsecphase2Gwstatstable; //type: CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable
        class Ciketunnelhisttable; //type: CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable
        class Cipsectunnelhisttable; //type: CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable
        class Cipsecendpthisttable; //type: CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable
        class Cikefailtable; //type: CISCOIPSECFLOWMONITORMIB::Cikefailtable
        class Cipsecfailtable; //type: CISCOIPSECFLOWMONITORMIB::Cipsecfailtable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipseclevels> cipseclevels;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikeglobalstats> cikeglobalstats;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats> cipsecglobalstats;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl> cipsechistglobalcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl> cipsecfailglobalcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl> cipsectrapcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikepeertable> cikepeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Ciketunneltable> ciketunneltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable> cikepeercorrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable> cikephase1gwstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectunneltable> cipsectunneltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecendpttable> cipsecendpttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecspitable> cipsecspitable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable> cipsecphase2gwstatstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable> ciketunnelhisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable> cipsectunnelhisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable> cipsecendpthisttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikefailtable> cikefailtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecfailtable> cipsecfailtable;
        
}; // CISCOIPSECFLOWMONITORMIB


class CISCOIPSECFLOWMONITORMIB::Cipseclevels : public ydk::Entity
{
    public:
        Cipseclevels();
        ~Cipseclevels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsecmiblevel; //type: int32

}; // CISCOIPSECFLOWMONITORMIB::Cipseclevels


class CISCOIPSECFLOWMONITORMIB::Cikeglobalstats : public ydk::Entity
{
    public:
        Cikeglobalstats();
        ~Cikeglobalstats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cikeglobalactivetunnels; //type: uint32
        ydk::YLeaf cikeglobalprevioustunnels; //type: uint32
        ydk::YLeaf cikeglobalinoctets; //type: uint32
        ydk::YLeaf cikeglobalinpkts; //type: uint32
        ydk::YLeaf cikeglobalindroppkts; //type: uint32
        ydk::YLeaf cikeglobalinnotifys; //type: uint32
        ydk::YLeaf cikeglobalinp2exchgs; //type: uint32
        ydk::YLeaf cikeglobalinp2exchginvalids; //type: uint32
        ydk::YLeaf cikeglobalinp2exchgrejects; //type: uint32
        ydk::YLeaf cikeglobalinp2sadelrequests; //type: uint32
        ydk::YLeaf cikeglobaloutoctets; //type: uint32
        ydk::YLeaf cikeglobaloutpkts; //type: uint32
        ydk::YLeaf cikeglobaloutdroppkts; //type: uint32
        ydk::YLeaf cikeglobaloutnotifys; //type: uint32
        ydk::YLeaf cikeglobaloutp2exchgs; //type: uint32
        ydk::YLeaf cikeglobaloutp2exchginvalids; //type: uint32
        ydk::YLeaf cikeglobaloutp2exchgrejects; //type: uint32
        ydk::YLeaf cikeglobaloutp2sadelrequests; //type: uint32
        ydk::YLeaf cikeglobalinittunnels; //type: uint32
        ydk::YLeaf cikeglobalinittunnelfails; //type: uint32
        ydk::YLeaf cikeglobalresptunnelfails; //type: uint32
        ydk::YLeaf cikeglobalsyscapfails; //type: uint32
        ydk::YLeaf cikeglobalauthfails; //type: uint32
        ydk::YLeaf cikeglobaldecryptfails; //type: uint32
        ydk::YLeaf cikeglobalhashvalidfails; //type: uint32
        ydk::YLeaf cikeglobalnosafails; //type: uint32

}; // CISCOIPSECFLOWMONITORMIB::Cikeglobalstats


class CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats : public ydk::Entity
{
    public:
        Cipsecglobalstats();
        ~Cipsecglobalstats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsecglobalactivetunnels; //type: uint32
        ydk::YLeaf cipsecglobalprevioustunnels; //type: uint32
        ydk::YLeaf cipsecglobalinoctets; //type: uint32
        ydk::YLeaf cipsecglobalhcinoctets; //type: uint64
        ydk::YLeaf cipsecglobalinoctwraps; //type: uint32
        ydk::YLeaf cipsecglobalindecompoctets; //type: uint32
        ydk::YLeaf cipsecglobalhcindecompoctets; //type: uint64
        ydk::YLeaf cipsecglobalindecompoctwraps; //type: uint32
        ydk::YLeaf cipsecglobalinpkts; //type: uint32
        ydk::YLeaf cipsecglobalindrops; //type: uint32
        ydk::YLeaf cipsecglobalinreplaydrops; //type: uint32
        ydk::YLeaf cipsecglobalinauths; //type: uint32
        ydk::YLeaf cipsecglobalinauthfails; //type: uint32
        ydk::YLeaf cipsecglobalindecrypts; //type: uint32
        ydk::YLeaf cipsecglobalindecryptfails; //type: uint32
        ydk::YLeaf cipsecglobaloutoctets; //type: uint32
        ydk::YLeaf cipsecglobalhcoutoctets; //type: uint64
        ydk::YLeaf cipsecglobaloutoctwraps; //type: uint32
        ydk::YLeaf cipsecglobaloutuncompoctets; //type: uint32
        ydk::YLeaf cipsecglobalhcoutuncompoctets; //type: uint64
        ydk::YLeaf cipsecglobaloutuncompoctwraps; //type: uint32
        ydk::YLeaf cipsecglobaloutpkts; //type: uint32
        ydk::YLeaf cipsecglobaloutdrops; //type: uint32
        ydk::YLeaf cipsecglobaloutauths; //type: uint32
        ydk::YLeaf cipsecglobaloutauthfails; //type: uint32
        ydk::YLeaf cipsecglobaloutencrypts; //type: uint32
        ydk::YLeaf cipsecglobaloutencryptfails; //type: uint32
        ydk::YLeaf cipsecglobalprotocolusefails; //type: uint32
        ydk::YLeaf cipsecglobalnosafails; //type: uint32
        ydk::YLeaf cipsecglobalsyscapfails; //type: uint32

}; // CISCOIPSECFLOWMONITORMIB::Cipsecglobalstats


class CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl : public ydk::Entity
{
    public:
        Cipsechistglobalcntl();
        ~Cipsechistglobalcntl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsechisttablesize; //type: int32
        ydk::YLeaf cipsechistcheckpoint; //type: Cipsechistcheckpoint
        class Cipsechistcheckpoint;

}; // CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl


class CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl : public ydk::Entity
{
    public:
        Cipsecfailglobalcntl();
        ~Cipsecfailglobalcntl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsecfailtablesize; //type: int32

}; // CISCOIPSECFLOWMONITORMIB::Cipsecfailglobalcntl


class CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl : public ydk::Entity
{
    public:
        Cipsectrapcntl();
        ~Cipsectrapcntl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsectrapcntliketunnelstart; //type: TrapStatus
        ydk::YLeaf cipsectrapcntliketunnelstop; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlikesysfailure; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlikecertcrlfailure; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlikeprotocolfail; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlikenosa; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsectunnelstart; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsectunnelstop; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsecsysfailure; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsecsetupfailure; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsecearlytunterm; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsecprotocolfail; //type: TrapStatus
        ydk::YLeaf cipsectrapcntlipsecnosa; //type: TrapStatus

}; // CISCOIPSECFLOWMONITORMIB::Cipsectrapcntl


class CISCOIPSECFLOWMONITORMIB::Cikepeertable : public ydk::Entity
{
    public:
        Cikepeertable();
        ~Cikepeertable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cikepeerentry; //type: CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry> > cikepeerentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cikepeertable


class CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry : public ydk::Entity
{
    public:
        Cikepeerentry();
        ~Cikepeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cikepeerlocaltype; //type: IkePeerType
        ydk::YLeaf cikepeerlocalvalue; //type: string
        ydk::YLeaf cikepeerremotetype; //type: IkePeerType
        ydk::YLeaf cikepeerremotevalue; //type: string
        ydk::YLeaf cikepeerintindex; //type: int32
        ydk::YLeaf cikepeerlocaladdr; //type: binary
        ydk::YLeaf cikepeerremoteaddr; //type: binary
        ydk::YLeaf cikepeeractivetime; //type: int32
        ydk::YLeaf cikepeeractivetunnelindex; //type: int32

}; // CISCOIPSECFLOWMONITORMIB::Cikepeertable::Cikepeerentry


class CISCOIPSECFLOWMONITORMIB::Ciketunneltable : public ydk::Entity
{
    public:
        Ciketunneltable();
        ~Ciketunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ciketunnelentry; //type: CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry> > ciketunnelentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Ciketunneltable


class CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry : public ydk::Entity
{
    public:
        Ciketunnelentry();
        ~Ciketunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ciketunindex; //type: int32
        ydk::YLeaf ciketunlocaltype; //type: IkePeerType
        ydk::YLeaf ciketunlocalvalue; //type: string
        ydk::YLeaf ciketunlocaladdr; //type: binary
        ydk::YLeaf ciketunlocalname; //type: string
        ydk::YLeaf ciketunremotetype; //type: IkePeerType
        ydk::YLeaf ciketunremotevalue; //type: string
        ydk::YLeaf ciketunremoteaddr; //type: binary
        ydk::YLeaf ciketunremotename; //type: string
        ydk::YLeaf ciketunnegomode; //type: IkeNegoMode
        ydk::YLeaf ciketundiffhellmangrp; //type: DiffHellmanGrp
        ydk::YLeaf ciketunencryptalgo; //type: EncryptAlgo
        ydk::YLeaf ciketunhashalgo; //type: IkeHashAlgo
        ydk::YLeaf ciketunauthmethod; //type: IkeAuthMethod
        ydk::YLeaf ciketunlifetime; //type: int32
        ydk::YLeaf ciketunactivetime; //type: int32
        ydk::YLeaf ciketunsarefreshthreshold; //type: int32
        ydk::YLeaf ciketuntotalrefreshes; //type: uint32
        ydk::YLeaf ciketuninoctets; //type: uint32
        ydk::YLeaf ciketuninpkts; //type: uint32
        ydk::YLeaf ciketunindroppkts; //type: uint32
        ydk::YLeaf ciketuninnotifys; //type: uint32
        ydk::YLeaf ciketuninp2exchgs; //type: uint32
        ydk::YLeaf ciketuninp2exchginvalids; //type: uint32
        ydk::YLeaf ciketuninp2exchgrejects; //type: uint32
        ydk::YLeaf ciketuninp2sadelrequests; //type: uint32
        ydk::YLeaf ciketunoutoctets; //type: uint32
        ydk::YLeaf ciketunoutpkts; //type: uint32
        ydk::YLeaf ciketunoutdroppkts; //type: uint32
        ydk::YLeaf ciketunoutnotifys; //type: uint32
        ydk::YLeaf ciketunoutp2exchgs; //type: uint32
        ydk::YLeaf ciketunoutp2exchginvalids; //type: uint32
        ydk::YLeaf ciketunoutp2exchgrejects; //type: uint32
        ydk::YLeaf ciketunoutp2sadelrequests; //type: uint32
        ydk::YLeaf ciketunstatus; //type: TunnelStatus

}; // CISCOIPSECFLOWMONITORMIB::Ciketunneltable::Ciketunnelentry


class CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable : public ydk::Entity
{
    public:
        Cikepeercorrtable();
        ~Cikepeercorrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cikepeercorrentry; //type: CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry> > cikepeercorrentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable


class CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry : public ydk::Entity
{
    public:
        Cikepeercorrentry();
        ~Cikepeercorrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cikepeercorrlocaltype; //type: IkePeerType
        ydk::YLeaf cikepeercorrlocalvalue; //type: string
        ydk::YLeaf cikepeercorrremotetype; //type: IkePeerType
        ydk::YLeaf cikepeercorrremotevalue; //type: string
        ydk::YLeaf cikepeercorrintindex; //type: int32
        ydk::YLeaf cikepeercorrseqnum; //type: int32
        ydk::YLeaf cikepeercorripsectunindex; //type: int32

}; // CISCOIPSECFLOWMONITORMIB::Cikepeercorrtable::Cikepeercorrentry


class CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable : public ydk::Entity
{
    public:
        Cikephase1Gwstatstable();
        ~Cikephase1Gwstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cikephase1Gwstatsentry; //type: CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry> > cikephase1gwstatsentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable


class CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry : public ydk::Entity
{
    public:
        Cikephase1Gwstatsentry();
        ~Cikephase1Gwstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cikephase1gwactivetunnels; //type: uint32
        ydk::YLeaf cikephase1gwprevioustunnels; //type: uint32
        ydk::YLeaf cikephase1gwinoctets; //type: uint32
        ydk::YLeaf cikephase1gwinpkts; //type: uint32
        ydk::YLeaf cikephase1gwindroppkts; //type: uint32
        ydk::YLeaf cikephase1gwinnotifys; //type: uint32
        ydk::YLeaf cikephase1gwinp2exchgs; //type: uint32
        ydk::YLeaf cikephase1gwinp2exchginvalids; //type: uint32
        ydk::YLeaf cikephase1gwinp2exchgrejects; //type: uint32
        ydk::YLeaf cikephase1gwinp2sadelrequests; //type: uint32
        ydk::YLeaf cikephase1gwoutoctets; //type: uint32
        ydk::YLeaf cikephase1gwoutpkts; //type: uint32
        ydk::YLeaf cikephase1gwoutdroppkts; //type: uint32
        ydk::YLeaf cikephase1gwoutnotifys; //type: uint32
        ydk::YLeaf cikephase1gwoutp2exchgs; //type: uint32
        ydk::YLeaf cikephase1gwoutp2exchginvalids; //type: uint32
        ydk::YLeaf cikephase1gwoutp2exchgrejects; //type: uint32
        ydk::YLeaf cikephase1gwoutp2sadelrequests; //type: uint32
        ydk::YLeaf cikephase1gwinittunnels; //type: uint32
        ydk::YLeaf cikephase1gwinittunnelfails; //type: uint32
        ydk::YLeaf cikephase1gwresptunnelfails; //type: uint32
        ydk::YLeaf cikephase1gwsyscapfails; //type: uint32
        ydk::YLeaf cikephase1gwauthfails; //type: uint32
        ydk::YLeaf cikephase1gwdecryptfails; //type: uint32
        ydk::YLeaf cikephase1gwhashvalidfails; //type: uint32
        ydk::YLeaf cikephase1gwnosafails; //type: uint32

}; // CISCOIPSECFLOWMONITORMIB::Cikephase1Gwstatstable::Cikephase1Gwstatsentry


class CISCOIPSECFLOWMONITORMIB::Cipsectunneltable : public ydk::Entity
{
    public:
        Cipsectunneltable();
        ~Cipsectunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsectunnelentry; //type: CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry> > cipsectunnelentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsectunneltable


class CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry : public ydk::Entity
{
    public:
        Cipsectunnelentry();
        ~Cipsectunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsectunindex; //type: int32
        ydk::YLeaf cipsectuniketunnelindex; //type: int32
        ydk::YLeaf cipsectuniketunnelalive; //type: boolean
        ydk::YLeaf cipsectunlocaladdr; //type: binary
        ydk::YLeaf cipsectunremoteaddr; //type: binary
        ydk::YLeaf cipsectunkeytype; //type: KeyType
        ydk::YLeaf cipsectunencapmode; //type: EncapMode
        ydk::YLeaf cipsectunlifesize; //type: int32
        ydk::YLeaf cipsectunlifetime; //type: int32
        ydk::YLeaf cipsectunactivetime; //type: int32
        ydk::YLeaf cipsectunsalifesizethreshold; //type: int32
        ydk::YLeaf cipsectunsalifetimethreshold; //type: int32
        ydk::YLeaf cipsectuntotalrefreshes; //type: uint32
        ydk::YLeaf cipsectunexpiredsainstances; //type: uint32
        ydk::YLeaf cipsectuncurrentsainstances; //type: uint32
        ydk::YLeaf cipsectuninsadiffhellmangrp; //type: DiffHellmanGrp
        ydk::YLeaf cipsectuninsaencryptalgo; //type: EncryptAlgo
        ydk::YLeaf cipsectuninsaahauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectuninsaespauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectuninsadecompalgo; //type: CompAlgo
        ydk::YLeaf cipsectunoutsadiffhellmangrp; //type: DiffHellmanGrp
        ydk::YLeaf cipsectunoutsaencryptalgo; //type: EncryptAlgo
        ydk::YLeaf cipsectunoutsaahauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectunoutsaespauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectunoutsacompalgo; //type: CompAlgo
        ydk::YLeaf cipsectuninoctets; //type: uint32
        ydk::YLeaf cipsectunhcinoctets; //type: uint64
        ydk::YLeaf cipsectuninoctwraps; //type: uint32
        ydk::YLeaf cipsectunindecompoctets; //type: uint32
        ydk::YLeaf cipsectunhcindecompoctets; //type: uint64
        ydk::YLeaf cipsectunindecompoctwraps; //type: uint32
        ydk::YLeaf cipsectuninpkts; //type: uint32
        ydk::YLeaf cipsectunindroppkts; //type: uint32
        ydk::YLeaf cipsectuninreplaydroppkts; //type: uint32
        ydk::YLeaf cipsectuninauths; //type: uint32
        ydk::YLeaf cipsectuninauthfails; //type: uint32
        ydk::YLeaf cipsectunindecrypts; //type: uint32
        ydk::YLeaf cipsectunindecryptfails; //type: uint32
        ydk::YLeaf cipsectunoutoctets; //type: uint32
        ydk::YLeaf cipsectunhcoutoctets; //type: uint64
        ydk::YLeaf cipsectunoutoctwraps; //type: uint32
        ydk::YLeaf cipsectunoutuncompoctets; //type: uint32
        ydk::YLeaf cipsectunhcoutuncompoctets; //type: uint64
        ydk::YLeaf cipsectunoutuncompoctwraps; //type: uint32
        ydk::YLeaf cipsectunoutpkts; //type: uint32
        ydk::YLeaf cipsectunoutdroppkts; //type: uint32
        ydk::YLeaf cipsectunoutauths; //type: uint32
        ydk::YLeaf cipsectunoutauthfails; //type: uint32
        ydk::YLeaf cipsectunoutencrypts; //type: uint32
        ydk::YLeaf cipsectunoutencryptfails; //type: uint32
        ydk::YLeaf cipsectunstatus; //type: TunnelStatus

}; // CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry


class CISCOIPSECFLOWMONITORMIB::Cipsecendpttable : public ydk::Entity
{
    public:
        Cipsecendpttable();
        ~Cipsecendpttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsecendptentry; //type: CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry> > cipsecendptentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsecendpttable


class CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry : public ydk::Entity
{
    public:
        Cipsecendptentry();
        ~Cipsecendptentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::cipsectunindex)
        ydk::YLeaf cipsectunindex;
        ydk::YLeaf cipsecendptindex; //type: int32
        ydk::YLeaf cipsecendptlocalname; //type: string
        ydk::YLeaf cipsecendptlocaltype; //type: EndPtType
        ydk::YLeaf cipsecendptlocaladdr1; //type: binary
        ydk::YLeaf cipsecendptlocaladdr2; //type: binary
        ydk::YLeaf cipsecendptlocalprotocol; //type: int32
        ydk::YLeaf cipsecendptlocalport; //type: int32
        ydk::YLeaf cipsecendptremotename; //type: string
        ydk::YLeaf cipsecendptremotetype; //type: EndPtType
        ydk::YLeaf cipsecendptremoteaddr1; //type: binary
        ydk::YLeaf cipsecendptremoteaddr2; //type: binary
        ydk::YLeaf cipsecendptremoteprotocol; //type: int32
        ydk::YLeaf cipsecendptremoteport; //type: int32

}; // CISCOIPSECFLOWMONITORMIB::Cipsecendpttable::Cipsecendptentry


class CISCOIPSECFLOWMONITORMIB::Cipsecspitable : public ydk::Entity
{
    public:
        Cipsecspitable();
        ~Cipsecspitable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsecspientry; //type: CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry> > cipsecspientry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsecspitable


class CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry : public ydk::Entity
{
    public:
        Cipsecspientry();
        ~Cipsecspientry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectunneltable::Cipsectunnelentry::cipsectunindex)
        ydk::YLeaf cipsectunindex;
        ydk::YLeaf cipsecspiindex; //type: int32
        ydk::YLeaf cipsecspidirection; //type: Cipsecspidirection
        ydk::YLeaf cipsecspivalue; //type: uint32
        ydk::YLeaf cipsecspiprotocol; //type: Cipsecspiprotocol
        ydk::YLeaf cipsecspistatus; //type: Cipsecspistatus
        class Cipsecspidirection;
        class Cipsecspiprotocol;
        class Cipsecspistatus;

}; // CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry


class CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable : public ydk::Entity
{
    public:
        Cipsecphase2Gwstatstable();
        ~Cipsecphase2Gwstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsecphase2Gwstatsentry; //type: CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry> > cipsecphase2gwstatsentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable


class CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry : public ydk::Entity
{
    public:
        Cipsecphase2Gwstatsentry();
        ~Cipsecphase2Gwstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::Cmediagwtable::Cmediagwentry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cipsecphase2gwactivetunnels; //type: uint32
        ydk::YLeaf cipsecphase2gwprevioustunnels; //type: uint32
        ydk::YLeaf cipsecphase2gwinoctets; //type: uint32
        ydk::YLeaf cipsecphase2gwinoctwraps; //type: uint32
        ydk::YLeaf cipsecphase2gwindecompoctets; //type: uint32
        ydk::YLeaf cipsecphase2gwindecompoctwraps; //type: uint32
        ydk::YLeaf cipsecphase2gwinpkts; //type: uint32
        ydk::YLeaf cipsecphase2gwindrops; //type: uint32
        ydk::YLeaf cipsecphase2gwinreplaydrops; //type: uint32
        ydk::YLeaf cipsecphase2gwinauths; //type: uint32
        ydk::YLeaf cipsecphase2gwinauthfails; //type: uint32
        ydk::YLeaf cipsecphase2gwindecrypts; //type: uint32
        ydk::YLeaf cipsecphase2gwindecryptfails; //type: uint32
        ydk::YLeaf cipsecphase2gwoutoctets; //type: uint32
        ydk::YLeaf cipsecphase2gwoutoctwraps; //type: uint32
        ydk::YLeaf cipsecphase2gwoutuncompoctets; //type: uint32
        ydk::YLeaf cipsecphase2gwoutuncompoctwraps; //type: uint32
        ydk::YLeaf cipsecphase2gwoutpkts; //type: uint32
        ydk::YLeaf cipsecphase2gwoutdrops; //type: uint32
        ydk::YLeaf cipsecphase2gwoutauths; //type: uint32
        ydk::YLeaf cipsecphase2gwoutauthfails; //type: uint32
        ydk::YLeaf cipsecphase2gwoutencrypts; //type: uint32
        ydk::YLeaf cipsecphase2gwoutencryptfails; //type: uint32
        ydk::YLeaf cipsecphase2gwprotocolusefails; //type: uint32
        ydk::YLeaf cipsecphase2gwnosafails; //type: uint32
        ydk::YLeaf cipsecphase2gwsyscapfails; //type: uint32

}; // CISCOIPSECFLOWMONITORMIB::Cipsecphase2Gwstatstable::Cipsecphase2Gwstatsentry


class CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable : public ydk::Entity
{
    public:
        Ciketunnelhisttable();
        ~Ciketunnelhisttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Ciketunnelhistentry; //type: CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry> > ciketunnelhistentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable


class CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry : public ydk::Entity
{
    public:
        Ciketunnelhistentry();
        ~Ciketunnelhistentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ciketunhistindex; //type: int32
        ydk::YLeaf ciketunhisttermreason; //type: Ciketunhisttermreason
        ydk::YLeaf ciketunhistactiveindex; //type: int32
        ydk::YLeaf ciketunhistpeerlocaltype; //type: IkePeerType
        ydk::YLeaf ciketunhistpeerlocalvalue; //type: string
        ydk::YLeaf ciketunhistpeerintindex; //type: int32
        ydk::YLeaf ciketunhistpeerremotetype; //type: IkePeerType
        ydk::YLeaf ciketunhistpeerremotevalue; //type: string
        ydk::YLeaf ciketunhistlocaladdr; //type: binary
        ydk::YLeaf ciketunhistlocalname; //type: string
        ydk::YLeaf ciketunhistremoteaddr; //type: binary
        ydk::YLeaf ciketunhistremotename; //type: string
        ydk::YLeaf ciketunhistnegomode; //type: IkeNegoMode
        ydk::YLeaf ciketunhistdiffhellmangrp; //type: DiffHellmanGrp
        ydk::YLeaf ciketunhistencryptalgo; //type: EncryptAlgo
        ydk::YLeaf ciketunhisthashalgo; //type: IkeHashAlgo
        ydk::YLeaf ciketunhistauthmethod; //type: IkeAuthMethod
        ydk::YLeaf ciketunhistlifetime; //type: int32
        ydk::YLeaf ciketunhiststarttime; //type: uint32
        ydk::YLeaf ciketunhistactivetime; //type: int32
        ydk::YLeaf ciketunhisttotalrefreshes; //type: uint32
        ydk::YLeaf ciketunhisttotalsas; //type: uint32
        ydk::YLeaf ciketunhistinoctets; //type: uint32
        ydk::YLeaf ciketunhistinpkts; //type: uint32
        ydk::YLeaf ciketunhistindroppkts; //type: uint32
        ydk::YLeaf ciketunhistinnotifys; //type: uint32
        ydk::YLeaf ciketunhistinp2exchgs; //type: uint32
        ydk::YLeaf ciketunhistinp2exchginvalids; //type: uint32
        ydk::YLeaf ciketunhistinp2exchgrejects; //type: uint32
        ydk::YLeaf ciketunhistinp2sadelrequests; //type: uint32
        ydk::YLeaf ciketunhistoutoctets; //type: uint32
        ydk::YLeaf ciketunhistoutpkts; //type: uint32
        ydk::YLeaf ciketunhistoutdroppkts; //type: uint32
        ydk::YLeaf ciketunhistoutnotifys; //type: uint32
        ydk::YLeaf ciketunhistoutp2exchgs; //type: uint32
        ydk::YLeaf ciketunhistoutp2exchginvalids; //type: uint32
        ydk::YLeaf ciketunhistoutp2exchgrejects; //type: uint32
        ydk::YLeaf ciketunhistoutp2sadelrequests; //type: uint32
        class Ciketunhisttermreason;

}; // CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry


class CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable : public ydk::Entity
{
    public:
        Cipsectunnelhisttable();
        ~Cipsectunnelhisttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsectunnelhistentry; //type: CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry> > cipsectunnelhistentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable


class CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry : public ydk::Entity
{
    public:
        Cipsectunnelhistentry();
        ~Cipsectunnelhistentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsectunhistindex; //type: int32
        ydk::YLeaf cipsectunhisttermreason; //type: Cipsectunhisttermreason
        ydk::YLeaf cipsectunhistactiveindex; //type: int32
        ydk::YLeaf cipsectunhistiketunnelindex; //type: int32
        ydk::YLeaf cipsectunhistlocaladdr; //type: binary
        ydk::YLeaf cipsectunhistremoteaddr; //type: binary
        ydk::YLeaf cipsectunhistkeytype; //type: KeyType
        ydk::YLeaf cipsectunhistencapmode; //type: EncapMode
        ydk::YLeaf cipsectunhistlifesize; //type: int32
        ydk::YLeaf cipsectunhistlifetime; //type: int32
        ydk::YLeaf cipsectunhiststarttime; //type: uint32
        ydk::YLeaf cipsectunhistactivetime; //type: int32
        ydk::YLeaf cipsectunhisttotalrefreshes; //type: uint32
        ydk::YLeaf cipsectunhisttotalsas; //type: uint32
        ydk::YLeaf cipsectunhistinsadiffhellmangrp; //type: DiffHellmanGrp
        ydk::YLeaf cipsectunhistinsaencryptalgo; //type: EncryptAlgo
        ydk::YLeaf cipsectunhistinsaahauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectunhistinsaespauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectunhistinsadecompalgo; //type: CompAlgo
        ydk::YLeaf cipsectunhistoutsadiffhellmangrp; //type: DiffHellmanGrp
        ydk::YLeaf cipsectunhistoutsaencryptalgo; //type: EncryptAlgo
        ydk::YLeaf cipsectunhistoutsaahauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectunhistoutsaespauthalgo; //type: AuthAlgo
        ydk::YLeaf cipsectunhistoutsacompalgo; //type: CompAlgo
        ydk::YLeaf cipsectunhistinoctets; //type: uint32
        ydk::YLeaf cipsectunhisthcinoctets; //type: uint64
        ydk::YLeaf cipsectunhistinoctwraps; //type: uint32
        ydk::YLeaf cipsectunhistindecompoctets; //type: uint32
        ydk::YLeaf cipsectunhisthcindecompoctets; //type: uint64
        ydk::YLeaf cipsectunhistindecompoctwraps; //type: uint32
        ydk::YLeaf cipsectunhistinpkts; //type: uint32
        ydk::YLeaf cipsectunhistindroppkts; //type: uint32
        ydk::YLeaf cipsectunhistinreplaydroppkts; //type: uint32
        ydk::YLeaf cipsectunhistinauths; //type: uint32
        ydk::YLeaf cipsectunhistinauthfails; //type: uint32
        ydk::YLeaf cipsectunhistindecrypts; //type: uint32
        ydk::YLeaf cipsectunhistindecryptfails; //type: uint32
        ydk::YLeaf cipsectunhistoutoctets; //type: uint32
        ydk::YLeaf cipsectunhisthcoutoctets; //type: uint64
        ydk::YLeaf cipsectunhistoutoctwraps; //type: uint32
        ydk::YLeaf cipsectunhistoutuncompoctets; //type: uint32
        ydk::YLeaf cipsectunhisthcoutuncompoctets; //type: uint64
        ydk::YLeaf cipsectunhistoutuncompoctwraps; //type: uint32
        ydk::YLeaf cipsectunhistoutpkts; //type: uint32
        ydk::YLeaf cipsectunhistoutdroppkts; //type: uint32
        ydk::YLeaf cipsectunhistoutauths; //type: uint32
        ydk::YLeaf cipsectunhistoutauthfails; //type: uint32
        ydk::YLeaf cipsectunhistoutencrypts; //type: uint32
        ydk::YLeaf cipsectunhistoutencryptfails; //type: uint32
        class Cipsectunhisttermreason;

}; // CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry


class CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable : public ydk::Entity
{
    public:
        Cipsecendpthisttable();
        ~Cipsecendpthisttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsecendpthistentry; //type: CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry> > cipsecendpthistentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable


class CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry : public ydk::Entity
{
    public:
        Cipsecendpthistentry();
        ~Cipsecendpthistentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsecendpthistindex; //type: int32
        ydk::YLeaf cipsecendpthisttunindex; //type: int32
        ydk::YLeaf cipsecendpthistactiveindex; //type: int32
        ydk::YLeaf cipsecendpthistlocalname; //type: string
        ydk::YLeaf cipsecendpthistlocaltype; //type: EndPtType
        ydk::YLeaf cipsecendpthistlocaladdr1; //type: binary
        ydk::YLeaf cipsecendpthistlocaladdr2; //type: binary
        ydk::YLeaf cipsecendpthistlocalprotocol; //type: int32
        ydk::YLeaf cipsecendpthistlocalport; //type: int32
        ydk::YLeaf cipsecendpthistremotename; //type: string
        ydk::YLeaf cipsecendpthistremotetype; //type: EndPtType
        ydk::YLeaf cipsecendpthistremoteaddr1; //type: binary
        ydk::YLeaf cipsecendpthistremoteaddr2; //type: binary
        ydk::YLeaf cipsecendpthistremoteprotocol; //type: int32
        ydk::YLeaf cipsecendpthistremoteport; //type: int32

}; // CISCOIPSECFLOWMONITORMIB::Cipsecendpthisttable::Cipsecendpthistentry


class CISCOIPSECFLOWMONITORMIB::Cikefailtable : public ydk::Entity
{
    public:
        Cikefailtable();
        ~Cikefailtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cikefailentry; //type: CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry> > cikefailentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cikefailtable


class CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry : public ydk::Entity
{
    public:
        Cikefailentry();
        ~Cikefailentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cikefailindex; //type: int32
        ydk::YLeaf cikefailreason; //type: Cikefailreason
        ydk::YLeaf cikefailtime; //type: uint32
        ydk::YLeaf cikefaillocaltype; //type: IkePeerType
        ydk::YLeaf cikefaillocalvalue; //type: string
        ydk::YLeaf cikefailremotetype; //type: IkePeerType
        ydk::YLeaf cikefailremotevalue; //type: string
        ydk::YLeaf cikefaillocaladdr; //type: binary
        ydk::YLeaf cikefailremoteaddr; //type: binary
        class Cikefailreason;

}; // CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry


class CISCOIPSECFLOWMONITORMIB::Cipsecfailtable : public ydk::Entity
{
    public:
        Cipsecfailtable();
        ~Cipsecfailtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cipsecfailentry; //type: CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSEC_FLOW_MONITOR_MIB::CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry> > cipsecfailentry;
        
}; // CISCOIPSECFLOWMONITORMIB::Cipsecfailtable


class CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry : public ydk::Entity
{
    public:
        Cipsecfailentry();
        ~Cipsecfailentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cipsecfailindex; //type: int32
        ydk::YLeaf cipsecfailreason; //type: Cipsecfailreason
        ydk::YLeaf cipsecfailtime; //type: uint32
        ydk::YLeaf cipsecfailtunnelindex; //type: int32
        ydk::YLeaf cipsecfailsaspi; //type: int32
        ydk::YLeaf cipsecfailpktsrcaddr; //type: binary
        ydk::YLeaf cipsecfailpktdstaddr; //type: binary
        class Cipsecfailreason;

}; // CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry

class IkePeerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipAddrPeer;
        static const ydk::Enum::YLeaf namePeer;

};

class IkeNegoMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf main;
        static const ydk::Enum::YLeaf aggressive;

};

class IkeHashAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

};

class IkeAuthMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf preSharedKey;
        static const ydk::Enum::YLeaf rsaSig;
        static const ydk::Enum::YLeaf rsaEncrypt;
        static const ydk::Enum::YLeaf revPublicKey;

};

class DiffHellmanGrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dhGroup1;
        static const ydk::Enum::YLeaf dhGroup2;

};

class KeyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ike;
        static const ydk::Enum::YLeaf manual;

};

class EncapMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf transport;

};

class EncryptAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf des3;

};

class AuthAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf hmacMd5;
        static const ydk::Enum::YLeaf hmacSha;

};

class CompAlgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ldf;

};

class EndPtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf singleIpAddr;
        static const ydk::Enum::YLeaf ipAddrRange;
        static const ydk::Enum::YLeaf ipSubnet;

};

class TunnelStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf destroy;

};

class TrapStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOIPSECFLOWMONITORMIB::Cipsechistglobalcntl::Cipsechistcheckpoint : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf checkPoint;

};

class CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspidirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspiprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ah;
        static const ydk::Enum::YLeaf esp;
        static const ydk::Enum::YLeaf ipcomp;

};

class CISCOIPSECFLOWMONITORMIB::Cipsecspitable::Cipsecspientry::Cipsecspistatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf expiring;

};

class CISCOIPSECFLOWMONITORMIB::Ciketunnelhisttable::Ciketunnelhistentry::Ciketunhisttermreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf operRequest;
        static const ydk::Enum::YLeaf peerDelRequest;
        static const ydk::Enum::YLeaf peerLost;
        static const ydk::Enum::YLeaf localFailure;
        static const ydk::Enum::YLeaf checkPointReg;

};

class CISCOIPSECFLOWMONITORMIB::Cipsectunnelhisttable::Cipsectunnelhistentry::Cipsectunhisttermreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf operRequest;
        static const ydk::Enum::YLeaf peerDelRequest;
        static const ydk::Enum::YLeaf peerLost;
        static const ydk::Enum::YLeaf seqNumRollOver;
        static const ydk::Enum::YLeaf checkPointReq;

};

class CISCOIPSECFLOWMONITORMIB::Cikefailtable::Cikefailentry::Cikefailreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf peerDelRequest;
        static const ydk::Enum::YLeaf peerLost;
        static const ydk::Enum::YLeaf localFailure;
        static const ydk::Enum::YLeaf authFailure;
        static const ydk::Enum::YLeaf hashValidation;
        static const ydk::Enum::YLeaf encryptFailure;
        static const ydk::Enum::YLeaf internalError;
        static const ydk::Enum::YLeaf sysCapExceeded;
        static const ydk::Enum::YLeaf proposalFailure;
        static const ydk::Enum::YLeaf peerCertUnavailable;
        static const ydk::Enum::YLeaf peerCertNotValid;
        static const ydk::Enum::YLeaf localCertExpired;
        static const ydk::Enum::YLeaf crlFailure;
        static const ydk::Enum::YLeaf peerEncodingError;
        static const ydk::Enum::YLeaf nonExistentSa;
        static const ydk::Enum::YLeaf operRequest;

};

class CISCOIPSECFLOWMONITORMIB::Cipsecfailtable::Cipsecfailentry::Cipsecfailreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf internalError;
        static const ydk::Enum::YLeaf peerEncodingError;
        static const ydk::Enum::YLeaf proposalFailure;
        static const ydk::Enum::YLeaf protocolUseFail;
        static const ydk::Enum::YLeaf nonExistentSa;
        static const ydk::Enum::YLeaf decryptFailure;
        static const ydk::Enum::YLeaf encryptFailure;
        static const ydk::Enum::YLeaf inAuthFailure;
        static const ydk::Enum::YLeaf outAuthFailure;
        static const ydk::Enum::YLeaf compression;
        static const ydk::Enum::YLeaf sysCapExceeded;
        static const ydk::Enum::YLeaf peerDelRequest;
        static const ydk::Enum::YLeaf peerLost;
        static const ydk::Enum::YLeaf seqNumRollOver;
        static const ydk::Enum::YLeaf operRequest;

};


}
}

#endif /* _CISCO_IPSEC_FLOW_MONITOR_MIB_ */

