/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKValueEditOption : NTKEditOption {

	unsigned long long _value;

}
+(BOOL)supportsSecureCoding;
+(id)optionByValidatingValueOfInvalidOption:(id)arg1 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)localizedNameForValidValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_optionWithValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)localizedName;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_value;
-(id)dailySnapshotKey;
-(id)localizedNameForAction;
-(id)JSONObjectRepresentation;
-(BOOL)isValidOption;
-(id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
-(id)_valueToFaceBundleStringDict;
-(id)_faceBundleStringToValueDict;
@end

