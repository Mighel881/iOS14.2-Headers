/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HKClinicalBrandable.h>

@class NSString, NSURL, HKClinicalBrand, NSArray;

@interface HKClinicalProvider : NSObject <NSCopying, NSSecureCoding, HKClinicalBrandable> {

	NSString* _externalID;
	NSString* _title;
	NSString* _subtitle;
	NSString* _location;
	NSURL* _informationURL;
	HKClinicalBrand* _brand;
	NSArray* _gateways;

}

@property (nonatomic,copy,readonly) NSString * externalID;                     //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSURL * informationURL;                    //@synthesize informationURL=_informationURL - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalBrand * brand;                   //@synthesize brand=_brand - In the implementation block
@property (nonatomic,copy,readonly) NSArray * gateways;                        //@synthesize gateways=_gateways - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(HKClinicalBrand *)brand;
-(id)init;
-(NSString *)location;
-(NSArray *)gateways;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)externalID;
-(BOOL)isSupported;
-(NSURL *)informationURL;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 location:(id)arg4 informationURL:(id)arg5 brand:(id)arg6 gateways:(id)arg7 ;
@end
