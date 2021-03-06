#ifndef _CISCO_SMI_
#define _CISCO_SMI_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace CISCO_SMI {

class Ciscoproducts : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoproducts();
        ~Ciscoproducts();


}; // Ciscoproducts

class Local : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Local();
        ~Local();


}; // Local

class Temporary : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Temporary();
        ~Temporary();


}; // Temporary

class Pakmon : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Pakmon();
        ~Pakmon();


}; // Pakmon

class Workgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Workgroup();
        ~Workgroup();


}; // Workgroup

class Otherenterprises : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Otherenterprises();
        ~Otherenterprises();


}; // Otherenterprises

class Ciscosb : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscosb();
        ~Ciscosb();


}; // Ciscosb

class Ciscosmb : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscosmb();
        ~Ciscosmb();


}; // Ciscosmb

class Ciscoagentcapability : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoagentcapability();
        ~Ciscoagentcapability();


}; // Ciscoagentcapability

class Ciscoconfig : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoconfig();
        ~Ciscoconfig();


}; // Ciscoconfig

class Ciscomgmt : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscomgmt();
        ~Ciscomgmt();


}; // Ciscomgmt

class Ciscoexperiment : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoexperiment();
        ~Ciscoexperiment();


}; // Ciscoexperiment

class Ciscoadmin : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoadmin();
        ~Ciscoadmin();


}; // Ciscoadmin

class Ciscoproxy : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoproxy();
        ~Ciscoproxy();


}; // Ciscoproxy

class Ciscorptrgroupobjectid : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscorptrgroupobjectid();
        ~Ciscorptrgroupobjectid();


}; // Ciscorptrgroupobjectid

class Ciscounknownrptrgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscounknownrptrgroup();
        ~Ciscounknownrptrgroup();


}; // Ciscounknownrptrgroup

class Cisco2505Rptrgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Cisco2505Rptrgroup();
        ~Cisco2505Rptrgroup();


}; // Cisco2505Rptrgroup

class Cisco2507Rptrgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Cisco2507Rptrgroup();
        ~Cisco2507Rptrgroup();


}; // Cisco2507Rptrgroup

class Cisco2516Rptrgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Cisco2516Rptrgroup();
        ~Cisco2516Rptrgroup();


}; // Cisco2516Rptrgroup

class Ciscowsx5020Rptrgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscowsx5020Rptrgroup();
        ~Ciscowsx5020Rptrgroup();


}; // Ciscowsx5020Rptrgroup

class Ciscochipsets : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscochipsets();
        ~Ciscochipsets();


}; // Ciscochipsets

class Ciscochipsetsaint1 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscochipsetsaint1();
        ~Ciscochipsetsaint1();


}; // Ciscochipsetsaint1

class Ciscochipsetsaint2 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscochipsetsaint2();
        ~Ciscochipsetsaint2();


}; // Ciscochipsetsaint2

class Ciscochipsetsaint3 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscochipsetsaint3();
        ~Ciscochipsetsaint3();


}; // Ciscochipsetsaint3

class Ciscochipsetsaint4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscochipsetsaint4();
        ~Ciscochipsetsaint4();


}; // Ciscochipsetsaint4

class Ciscomodules : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscomodules();
        ~Ciscomodules();


}; // Ciscomodules

class Lightstream : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Lightstream();
        ~Lightstream();


}; // Lightstream

class Ciscoworks : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscoworks();
        ~Ciscoworks();


}; // Ciscoworks

class Newport : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Newport();
        ~Newport();


}; // Newport

class Ciscopartnerproducts : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscopartnerproducts();
        ~Ciscopartnerproducts();


}; // Ciscopartnerproducts

class Ciscopolicy : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscopolicy();
        ~Ciscopolicy();


}; // Ciscopolicy

class Ciscopib : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscopib();
        ~Ciscopib();


}; // Ciscopib

class Ciscopolicyauto : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscopolicyauto();
        ~Ciscopolicyauto();


}; // Ciscopolicyauto

class Ciscopibtomib : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscopibtomib();
        ~Ciscopibtomib();


}; // Ciscopibtomib

class Ciscodomains : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscodomains();
        ~Ciscodomains();


}; // Ciscodomains

class Ciscotdomainudpipv4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainudpipv4();
        ~Ciscotdomainudpipv4();


}; // Ciscotdomainudpipv4

class Ciscotdomainudpipv6 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainudpipv6();
        ~Ciscotdomainudpipv6();


}; // Ciscotdomainudpipv6

class Ciscotdomaintcpipv4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomaintcpipv4();
        ~Ciscotdomaintcpipv4();


}; // Ciscotdomaintcpipv4

class Ciscotdomaintcpipv6 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomaintcpipv6();
        ~Ciscotdomaintcpipv6();


}; // Ciscotdomaintcpipv6

class Ciscotdomainlocal : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainlocal();
        ~Ciscotdomainlocal();


}; // Ciscotdomainlocal

class Ciscotdomainclns : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainclns();
        ~Ciscotdomainclns();


}; // Ciscotdomainclns

class Ciscotdomaincons : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomaincons();
        ~Ciscotdomaincons();


}; // Ciscotdomaincons

class Ciscotdomainddp : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainddp();
        ~Ciscotdomainddp();


}; // Ciscotdomainddp

class Ciscotdomainipx : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainipx();
        ~Ciscotdomainipx();


}; // Ciscotdomainipx

class Ciscotdomainsctpipv4 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainsctpipv4();
        ~Ciscotdomainsctpipv4();


}; // Ciscotdomainsctpipv4

class Ciscotdomainsctpipv6 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscotdomainsctpipv6();
        ~Ciscotdomainsctpipv6();


}; // Ciscotdomainsctpipv6

class Ciscocib : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscocib();
        ~Ciscocib();


}; // Ciscocib

class Ciscocibmmigroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscocibmmigroup();
        ~Ciscocibmmigroup();


}; // Ciscocibmmigroup

class Ciscocibprovgroup : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscocibprovgroup();
        ~Ciscocibprovgroup();


}; // Ciscocibprovgroup

class Ciscopki : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Ciscopki();
        ~Ciscopki();


}; // Ciscopki


}
}

#endif /* _CISCO_SMI_ */

