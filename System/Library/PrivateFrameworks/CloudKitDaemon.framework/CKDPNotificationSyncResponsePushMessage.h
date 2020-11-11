/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {

	int _badgeCount;
	NSString* _category;
	NSString* _dialog;
	NSData* _payload;
	NSString* _sound;
	int _source;
	NSString* _subtitle;
	NSMutableArray* _subtitleLocalizedArguments;
	NSString* _subtitleLocalizedKey;
	NSString* _title;
	NSMutableArray* _titleLocalizedArguments;
	NSString* _titleLocalizedKey;
	NSString* _uuid;
	BOOL _isRead;
	SCD_Struct_CK17 _has;

}

@property (assign,nonatomic) BOOL hasIsRead; 
@property (assign,nonatomic) BOOL isRead;                                              //@synthesize isRead=_isRead - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDialog; 
@property (nonatomic,retain) NSString * dialog;                                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,retain) NSString * sound;                                         //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) int badgeCount;                                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                                      //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleLocalizedKey; 
@property (nonatomic,retain) NSString * titleLocalizedKey;                             //@synthesize titleLocalizedKey=_titleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * titleLocalizedArguments;                 //@synthesize titleLocalizedArguments=_titleLocalizedArguments - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitleLocalizedKey; 
@property (nonatomic,retain) NSString * subtitleLocalizedKey;                          //@synthesize subtitleLocalizedKey=_subtitleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * subtitleLocalizedArguments;              //@synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments - In the implementation block
+(Class)titleLocalizedArgumentsType;
+(Class)subtitleLocalizedArgumentsType;
-(NSData *)payload;
-(id)sourceAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(BOOL)isRead;
-(void)clearTitleLocalizedArguments;
-(NSString *)sound;
-(unsigned long long)subtitleLocalizedArgumentsCount;
-(BOOL)hasSource;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)hasSound;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)dialog;
-(NSString *)category;
-(NSString *)titleLocalizedKey;
-(void)setSubtitleLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTitleLocalizedKey;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSMutableArray *)subtitleLocalizedArguments;
-(BOOL)hasUuid;
-(void)setSource:(int)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addSubtitleLocalizedArguments:(id)arg1 ;
-(int)badgeCount;
-(id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(NSString *)subtitleLocalizedKey;
-(NSMutableArray *)titleLocalizedArguments;
-(id)description;
-(void)clearSubtitleLocalizedArguments;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(BOOL)hasSubtitle;
-(void)setTitleLocalizedKey:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setSubtitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)uuid;
-(void)copyTo:(id)arg1 ;
-(void)addTitleLocalizedArguments:(id)arg1 ;
-(NSString *)title;
-(void)setIsRead:(BOOL)arg1 ;
-(BOOL)hasSubtitleLocalizedKey;
-(void)setTitle:(NSString *)arg1 ;
-(id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPayload;
-(int)StringAsSource:(id)arg1 ;
-(void)setDialog:(NSString *)arg1 ;
-(BOOL)hasCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)titleLocalizedArgumentsCount;
-(void)setBadgeCount:(int)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(BOOL)hasDialog;
-(BOOL)hasIsRead;
-(void)setHasIsRead:(BOOL)arg1 ;
@end
