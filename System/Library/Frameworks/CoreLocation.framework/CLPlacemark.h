/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/INCodableAttributeRelationComparing.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemarkInternal, NSString, CNPostalAddress, CLLocation, CLRegion, NSTimeZone, NSDictionary, NSArray;

@interface CLPlacemark : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding> {

	CLPlacemarkInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CNPostalAddress * postalAddress; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,copy,readonly) CLRegion * region; 
@property (nonatomic,copy,readonly) NSTimeZone * timeZone; 
@property (nonatomic,copy,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * thoroughfare; 
@property (nonatomic,copy,readonly) NSString * subThoroughfare; 
@property (nonatomic,copy,readonly) NSString * locality; 
@property (nonatomic,copy,readonly) NSString * subLocality; 
@property (nonatomic,copy,readonly) NSString * administrativeArea; 
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea; 
@property (nonatomic,copy,readonly) NSString * postalCode; 
@property (nonatomic,copy,readonly) NSString * ISOcountryCode; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (nonatomic,copy,readonly) NSString * inlandWater; 
@property (nonatomic,copy,readonly) NSString * ocean; 
@property (nonatomic,copy,readonly) NSArray * areasOfInterest; 
+(id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(unsigned long long)_cLMapItemSourceFromRLMapItemSource:(unsigned long long)arg1 ;
+(id)placemarkWithGEOMapItem:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2 ;
-(id)_intents_indexingRepresentation;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(id)_intents_defaultReadableDescription;
-(BOOL)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2 ;
-(NSArray *)areasOfInterest;
-(NSString *)postalCode;
-(NSString *)subLocality;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 mapItemSource:(unsigned long long)arg5 geoMapItemHandle:(id)arg6 meCardAddress:(id)arg7 ;
-(NSString *)subAdministrativeArea;
-(NSDictionary *)addressDictionary;
-(CLRegion *)region;
-(NSString *)ocean;
-(id)mecardAddress;
-(id)_geoMapItemHandle;
-(id)_initWithGeoMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 ;
-(void)fetchFormattedAddress:(/*^block*/id)arg1 queue:(id)arg2 ;
-(NSString *)inlandWater;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)subThoroughfare;
-(NSString *)country;
-(id)_geoMapItem;
-(NSString *)name;
-(NSString *)administrativeArea;
-(NSString *)description;
-(NSTimeZone *)timeZone;
-(NSString *)locality;
-(id)formattedAddressLines;
-(id)fullThoroughfare;
-(CNPostalAddress *)postalAddress;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ISOcountryCode;
-(NSString *)thoroughfare;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(void)dealloc;
-(id)_initWithRTMapItem:(id)arg1 location:(id)arg2 ;
@end

