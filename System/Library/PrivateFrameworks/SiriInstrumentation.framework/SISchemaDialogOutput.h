/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, SISchemaRedactableString, NSData;

@interface SISchemaDialogOutput : PBCodable {

	NSString* _viewID;
	SISchemaRedactableString* _spokenDialogOutput;
	SISchemaRedactableString* _displayedDialogOutput;
	BOOL _hasViewID;
	BOOL _hasSpokenDialogOutput;
	BOOL _hasDisplayedDialogOutput;

}

@property (nonatomic,copy) NSString * viewID;                                               //@synthesize viewID=_viewID - In the implementation block
@property (assign,nonatomic) BOOL hasViewID;                                                //@synthesize hasViewID=_hasViewID - In the implementation block
@property (nonatomic,retain) SISchemaRedactableString * spokenDialogOutput;                 //@synthesize spokenDialogOutput=_spokenDialogOutput - In the implementation block
@property (assign,nonatomic) BOOL hasSpokenDialogOutput;                                    //@synthesize hasSpokenDialogOutput=_hasSpokenDialogOutput - In the implementation block
@property (nonatomic,retain) SISchemaRedactableString * displayedDialogOutput;              //@synthesize displayedDialogOutput=_displayedDialogOutput - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayedDialogOutput;                                 //@synthesize hasDisplayedDialogOutput=_hasDisplayedDialogOutput - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)viewID;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSpokenDialogOutput:(SISchemaRedactableString *)arg1 ;
-(void)setDisplayedDialogOutput:(SISchemaRedactableString *)arg1 ;
-(SISchemaRedactableString *)spokenDialogOutput;
-(SISchemaRedactableString *)displayedDialogOutput;
-(BOOL)hasViewID;
-(BOOL)hasSpokenDialogOutput;
-(BOOL)hasDisplayedDialogOutput;
-(void)setHasViewID:(BOOL)arg1 ;
-(void)setHasSpokenDialogOutput:(BOOL)arg1 ;
-(void)setHasDisplayedDialogOutput:(BOOL)arg1 ;
@end

