/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding> {

	double _createdAt;
	SCD_Struct_GE91 _kind;
	NSString* _bundleId;

}
+(BOOL)supportsSecureCoding;
-(void)refresh;
-(id)init;
-(BOOL)isValidForRequest:(SCD_Struct_GE91)arg1 client:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithXPCCoder:(id)arg1 ;
-(id)initWithRequest:(SCD_Struct_GE91)arg1 forClient:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
@end

