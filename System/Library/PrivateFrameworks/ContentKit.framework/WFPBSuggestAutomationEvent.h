/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {

	NSString* _key;
	NSString* _source;
	NSString* _suggestedAutomationIdentifier;
	BOOL _completed;
	BOOL _interacted;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedAutomationIdentifier; 
@property (nonatomic,retain) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasInteracted; 
@property (assign,nonatomic) BOOL interacted;                                       //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) NSString * source;                                     //@synthesize source=_source - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasSource;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)hasCompleted;
-(void)setHasCompleted:(BOOL)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)source;
-(void)copyTo:(id)arg1 ;
-(BOOL)completed;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInteracted:(BOOL)arg1 ;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(BOOL)hasSuggestedAutomationIdentifier;
-(void)setHasInteracted:(BOOL)arg1 ;
-(BOOL)hasInteracted;
-(NSString *)suggestedAutomationIdentifier;
-(BOOL)interacted;
@end

