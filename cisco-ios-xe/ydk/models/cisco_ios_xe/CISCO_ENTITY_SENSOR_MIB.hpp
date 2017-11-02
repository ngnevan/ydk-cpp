#ifndef _CISCO_ENTITY_SENSOR_MIB_
#define _CISCO_ENTITY_SENSOR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ENTITY_SENSOR_MIB {

class CISCOENTITYSENSORMIB : public ydk::Entity
{
    public:
        CISCOENTITYSENSORMIB();
        ~CISCOENTITYSENSORMIB();

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

        class Entsensorglobalobjects; //type: CISCOENTITYSENSORMIB::Entsensorglobalobjects
        class Entsensorvaluetable; //type: CISCOENTITYSENSORMIB::Entsensorvaluetable
        class Entsensorthresholdtable; //type: CISCOENTITYSENSORMIB::Entsensorthresholdtable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_SENSOR_MIB::CISCOENTITYSENSORMIB::Entsensorglobalobjects> entsensorglobalobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_SENSOR_MIB::CISCOENTITYSENSORMIB::Entsensorvaluetable> entsensorvaluetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_SENSOR_MIB::CISCOENTITYSENSORMIB::Entsensorthresholdtable> entsensorthresholdtable;
        
}; // CISCOENTITYSENSORMIB


class CISCOENTITYSENSORMIB::Entsensorglobalobjects : public ydk::Entity
{
    public:
        Entsensorglobalobjects();
        ~Entsensorglobalobjects();

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

        ydk::YLeaf entsensorthreshnotifglobalenable; //type: boolean

}; // CISCOENTITYSENSORMIB::Entsensorglobalobjects


class CISCOENTITYSENSORMIB::Entsensorvaluetable : public ydk::Entity
{
    public:
        Entsensorvaluetable();
        ~Entsensorvaluetable();

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

        class Entsensorvalueentry; //type: CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_SENSOR_MIB::CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry> > entsensorvalueentry;
        
}; // CISCOENTITYSENSORMIB::Entsensorvaluetable


class CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry : public ydk::Entity
{
    public:
        Entsensorvalueentry();
        ~Entsensorvalueentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entsensortype; //type: SensorDataType
        ydk::YLeaf entsensorscale; //type: SensorDataScale
        ydk::YLeaf entsensorprecision; //type: int32
        ydk::YLeaf entsensorvalue; //type: int32
        ydk::YLeaf entsensorstatus; //type: SensorStatus
        ydk::YLeaf entsensorvaluetimestamp; //type: uint32
        ydk::YLeaf entsensorvalueupdaterate; //type: int32
        ydk::YLeaf entsensormeasuredentity; //type: int32

}; // CISCOENTITYSENSORMIB::Entsensorvaluetable::Entsensorvalueentry


class CISCOENTITYSENSORMIB::Entsensorthresholdtable : public ydk::Entity
{
    public:
        Entsensorthresholdtable();
        ~Entsensorthresholdtable();

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

        class Entsensorthresholdentry; //type: CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_SENSOR_MIB::CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry> > entsensorthresholdentry;
        
}; // CISCOENTITYSENSORMIB::Entsensorthresholdtable


class CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry : public ydk::Entity
{
    public:
        Entsensorthresholdentry();
        ~Entsensorthresholdentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entsensorthresholdindex; //type: int32
        ydk::YLeaf entsensorthresholdseverity; //type: SensorThresholdSeverity
        ydk::YLeaf entsensorthresholdrelation; //type: SensorThresholdRelation
        ydk::YLeaf entsensorthresholdvalue; //type: int32
        ydk::YLeaf entsensorthresholdevaluation; //type: boolean
        ydk::YLeaf entsensorthresholdnotificationenable; //type: boolean

}; // CISCOENTITYSENSORMIB::Entsensorthresholdtable::Entsensorthresholdentry

class SensorDataType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf voltsAC;
        static const ydk::Enum::YLeaf voltsDC;
        static const ydk::Enum::YLeaf amperes;
        static const ydk::Enum::YLeaf watts;
        static const ydk::Enum::YLeaf hertz;
        static const ydk::Enum::YLeaf celsius;
        static const ydk::Enum::YLeaf percentRH;
        static const ydk::Enum::YLeaf rpm;
        static const ydk::Enum::YLeaf cmm;
        static const ydk::Enum::YLeaf truthvalue;
        static const ydk::Enum::YLeaf specialEnum;
        static const ydk::Enum::YLeaf dBm;

};

class SensorDataScale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf yocto;
        static const ydk::Enum::YLeaf zepto;
        static const ydk::Enum::YLeaf atto;
        static const ydk::Enum::YLeaf femto;
        static const ydk::Enum::YLeaf pico;
        static const ydk::Enum::YLeaf nano;
        static const ydk::Enum::YLeaf micro;
        static const ydk::Enum::YLeaf milli;
        static const ydk::Enum::YLeaf units;
        static const ydk::Enum::YLeaf kilo;
        static const ydk::Enum::YLeaf mega;
        static const ydk::Enum::YLeaf giga;
        static const ydk::Enum::YLeaf tera;
        static const ydk::Enum::YLeaf exa;
        static const ydk::Enum::YLeaf peta;
        static const ydk::Enum::YLeaf zetta;
        static const ydk::Enum::YLeaf yotta;

};

class SensorStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf unavailable;
        static const ydk::Enum::YLeaf nonoperational;

};

class SensorThresholdSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf critical;

};

class SensorThresholdRelation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lessThan;
        static const ydk::Enum::YLeaf lessOrEqual;
        static const ydk::Enum::YLeaf greaterThan;
        static const ydk::Enum::YLeaf greaterOrEqual;
        static const ydk::Enum::YLeaf equalTo;
        static const ydk::Enum::YLeaf notEqualTo;

};


}
}

#endif /* _CISCO_ENTITY_SENSOR_MIB_ */

