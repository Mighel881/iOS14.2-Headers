/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SISchemaClientTurnContext;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding> {

	NSUUID* _turnIdentifier;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) NSUUID * turnIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)newTurnBasedContextWithPreviousTurnID:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)turnIdentifier;
-(void)emitInstrumentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTurnIdentifier:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 ;
-(id)nextTurnBasedContext;
@end

