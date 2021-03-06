/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NENetworkAgent.h>

@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {

	NSData* _agentData;

}

@property (retain) NSData * agentData;              //@synthesize agentData=_agentData - In the implementation block
+(id)agentFromData:(id)arg1 ;
+(id)agentDomain;
+(id)agentType;
-(void)setAgentData:(NSData *)arg1 ;
-(id)agentDescription;
-(id)initWithProxyConfiguration:(id)arg1 ;
-(NSData *)agentData;
-(id)copyAgentData;
@end

