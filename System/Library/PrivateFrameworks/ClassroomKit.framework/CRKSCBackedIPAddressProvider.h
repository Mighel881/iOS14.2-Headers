/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@class NSString, NSSet;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding> {

	NSSet* mInterfaceTypes;

}

@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ethernetIPAddressProvider;
+(id)WiFiIPAddressProvider;
-(id)init;
-(id)initWithInterfaceType:(id)arg1 ;
-(id)initWithInterfaceTypes:(id)arg1 ;
-(NSString *)IPAddress;
-(BOOL)isAllowedInterfaceType:(id)arg1 ;
@end

