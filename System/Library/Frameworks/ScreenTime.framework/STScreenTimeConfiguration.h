/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface STScreenTimeConfiguration : NSObject <NSSecureCoding> {

	BOOL _enforcesChildRestrictions;

}

@property (assign) BOOL enforcesChildRestrictions;              //@synthesize enforcesChildRestrictions=_enforcesChildRestrictions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(BOOL)arg1 ;
-(BOOL)enforcesChildRestrictions;
-(id)initWithEnforcesChildRestrictions:(BOOL)arg1 ;
-(void)setEnforcesChildRestrictions:(BOOL)arg1 ;
@end

