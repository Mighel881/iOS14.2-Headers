/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MRContentItemMetadata, NSArray, MRArtwork, _MRContentItemProtobuf, NSData, NSDictionary;

@interface MRContentItem : NSObject <NSCopying> {

	NSString* _identifier;
	MRContentItemMetadata* _metadata;
	NSString* _info;
	NSArray* _availableLanguageOptions;
	NSArray* _currentLanguageOptions;
	NSArray* _sections;
	NSString* _parentIdentifier;
	NSString* _ancestorIdentifier;
	NSString* _queueIdentifier;
	NSString* _requestIdentifier;
	MRArtwork* _artwork;

}

@property (nonatomic,readonly) _MRContentItemProtobuf * protobuf; 
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) MRContentItemMetadata * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * info;                                               //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSArray * availableLanguageOptions;                            //@synthesize availableLanguageOptions=_availableLanguageOptions - In the implementation block
@property (nonatomic,copy) NSArray * currentLanguageOptions;                              //@synthesize currentLanguageOptions=_currentLanguageOptions - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * parentIdentifier;                                   //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ancestorIdentifier;                                 //@synthesize ancestorIdentifier=_ancestorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                    //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) MRArtwork * artwork;                                         //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) MRContentItem * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSDictionary * nowPlayingInfo; 
+(id)extractedIdentifierFromNowPlayingInfo:(id)arg1 ;
+(id)mergeContentItems:(id)arg1 ;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(MRContentItem *)skeleton;
-(NSDictionary *)nowPlayingInfo;
-(void)setArtwork:(MRArtwork *)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(NSArray *)availableLanguageOptions;
-(void)setNowPlayingInfo:(id)arg1 policy:(unsigned char)arg2 request:(id)arg3 ;
-(void)setMetadata:(MRContentItemMetadata *)arg1 ;
-(void)setAvailableLanguageOptions:(NSArray *)arg1 ;
-(void)setCurrentLanguageOptions:(NSArray *)arg1 ;
-(NSString *)ancestorIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)info;
-(NSString *)identifier;
-(MRContentItemMetadata *)metadata;
-(NSString *)requestIdentifier;
-(void)setInfo:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSData *)data;
-(MRArtwork *)artwork;
-(_MRContentItemProtobuf *)protobuf;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)queueIdentifier;
-(NSArray *)currentLanguageOptions;
-(id)initWithData:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithNowPlayingInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAncestorIdentifier:(NSString *)arg1 ;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(NSString *)parentIdentifier;
@end

