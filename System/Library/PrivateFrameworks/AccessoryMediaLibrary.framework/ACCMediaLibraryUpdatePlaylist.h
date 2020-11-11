/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessoryMediaLibrary/AccessoryMediaLibrary-Structs.h>
@class NSString, ACCMediaLibraryUpdatePlaylistContent;

@interface ACCMediaLibraryUpdatePlaylist : NSObject {

	BOOL _folder;
	BOOL _geniusMix;
	BOOL _radioStation;
	BOOL _smartPlaylist;
	unsigned short _radioStationOrdering;
	int _contentStyle;
	NSString* _mediaLibraryUID;
	NSString* _revision;
	unsigned long long _persistentID;
	unsigned long long _validMask;
	NSString* _name;
	unsigned long long _parentPersistentID;
	ACCMediaLibraryUpdatePlaylistContent* _content;

}

@property (nonatomic,retain) NSString * mediaLibraryUID;                                  //@synthesize mediaLibraryUID=_mediaLibraryUID - In the implementation block
@property (nonatomic,retain) NSString * revision;                                         //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic) unsigned long long persistentID;                             //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) unsigned long long validMask;                              //@synthesize validMask=_validMask - In the implementation block
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long parentPersistentID;                       //@synthesize parentPersistentID=_parentPersistentID - In the implementation block
@property (assign,nonatomic) BOOL folder;                                                 //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) BOOL geniusMix;                                              //@synthesize geniusMix=_geniusMix - In the implementation block
@property (assign,nonatomic) BOOL radioStation;                                           //@synthesize radioStation=_radioStation - In the implementation block
@property (assign,nonatomic) BOOL smartPlaylist;                                          //@synthesize smartPlaylist=_smartPlaylist - In the implementation block
@property (assign,nonatomic) unsigned short radioStationOrdering;                         //@synthesize radioStationOrdering=_radioStationOrdering - In the implementation block
@property (assign,nonatomic) int contentStyle;                                            //@synthesize contentStyle=_contentStyle - In the implementation block
@property (nonatomic,retain) ACCMediaLibraryUpdatePlaylistContent * content;              //@synthesize content=_content - In the implementation block
-(BOOL)radioStation;
-(unsigned long long)persistentID;
-(BOOL)geniusMix;
-(id)debugDescription;
-(NSString *)revision;
-(void)setContent:(ACCMediaLibraryUpdatePlaylistContent *)arg1 ;
-(NSString *)name;
-(void)setRevision:(NSString *)arg1 ;
-(BOOL)folder;
-(id)description;
-(void)setFolder:(BOOL)arg1 ;
-(void)setPersistentID:(unsigned long long)arg1 ;
-(int)contentStyle;
-(void)setContentStyle:(int)arg1 ;
-(void)setRadioStation:(BOOL)arg1 ;
-(ACCMediaLibraryUpdatePlaylistContent *)content;
-(void)setName:(NSString *)arg1 ;
-(id)copyDict;
-(id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3 ;
-(id)initWithMediaLibrary:(id)arg1 dict:(id)arg2 ;
-(void)fillStruct:(SCD_Struct_AC0*)arg1 ;
-(void)setMediaLibraryUID:(NSString *)arg1 ;
-(void)setParentPersistentID:(unsigned long long)arg1 ;
-(void)setGeniusMix:(BOOL)arg1 ;
-(void)setSmartPlaylist:(BOOL)arg1 ;
-(void)setRadioStationOrdering:(unsigned short)arg1 ;
-(NSString *)mediaLibraryUID;
-(unsigned long long)validMask;
-(unsigned long long)parentPersistentID;
-(BOOL)smartPlaylist;
-(unsigned short)radioStationOrdering;
@end
