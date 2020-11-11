/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {

	BOOL _includeDHGroup;
	NSArray* _proposals;

}

@property (retain) NSArray * proposals;              //@synthesize proposals=_proposals - In the implementation block
@property (assign) BOOL includeDHGroup;              //@synthesize includeDHGroup=_includeDHGroup - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)proposals;
-(id)description;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setIncludeDHGroup:(BOOL)arg1 ;
-(unsigned long long)type;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(BOOL)includeDHGroup;
@end
