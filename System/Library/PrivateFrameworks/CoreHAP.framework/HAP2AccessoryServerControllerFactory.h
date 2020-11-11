/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerControllerFactory.h>

@protocol HAP2AccessoryServerControllerFactory <NSObject>
@required
-(id)createControllerWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3;

@end


@class NSString;

@interface HAP2AccessoryServerControllerFactory : HAP2LoggingObject <HAP2AccessoryServerControllerFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createControllerWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3 ;
@end
