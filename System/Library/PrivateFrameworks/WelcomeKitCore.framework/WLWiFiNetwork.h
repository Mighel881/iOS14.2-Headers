/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSString;

@interface WLWiFiNetwork : NSObject {

	WiFiNetworkRef _ref;

}

@property (assign,nonatomic) WiFiNetworkRef ref;              //@synthesize ref=_ref - In the implementation block
@property (nonatomic,readonly) NSString * ssid; 
-(WiFiNetworkRef)ref;
-(NSString *)ssid;
-(void)setRef:(WiFiNetworkRef)arg1 ;
-(void)dealloc;
-(id)initWithWiFiNetworkRef:(WiFiNetworkRef)arg1 ;
@end
