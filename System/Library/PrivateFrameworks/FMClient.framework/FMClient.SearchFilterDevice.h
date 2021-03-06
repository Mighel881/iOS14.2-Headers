/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.SearchFilterDevice : NSObject <NSSecureCoding> {

	 ownerName;
	 ownerDsid;
	 deviceName;
	 deviceClass;
	 productName;
	 productType;

}

@property (readonly,nonatomic) NSString * ownerName; 
@property (readonly,nonatomic) NSString * ownerDsid; 
@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * deviceClass; 
@property (readonly,nonatomic) NSString * productName; 
@property (readonly,nonatomic) NSString * productType; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(NSString *)productName;
-(id)init;
-(NSString *)deviceClass;
-(NSString *)ownerName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)productType;
-(NSString *)ownerDsid;
-(id)initWithOwnerName:(id)arg1 ownerDsid:(id)arg2 deviceName:(id)arg3 deviceClass:(id)arg4 productName:(id)arg5 productType:(id)arg6 ;
@end

