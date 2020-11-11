/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, SKUIStoreIdentifier;

@interface SKUIItemState : NSObject <NSCopying> {

	float _downloadProgress;
	unsigned long long _downloadContentFlags;
	NSString* _downloadPhase;
	NSNumber* _itemIdentifier;
	NSArray* _downloadIdentifiers;
	SKUIStoreIdentifier* _storeIdentifier;
	unsigned long long _libraryContentFlags;
	long long _mediaCategory;
	unsigned long long _state;
	NSString* _variantIdentifier;

}

@property (nonatomic,readonly) BOOL activeStateIsPreview; 
@property (nonatomic,readonly) unsigned long long allContentFlags; 
@property (assign,nonatomic) unsigned long long downloadContentFlags;              //@synthesize downloadContentFlags=_downloadContentFlags - In the implementation block
@property (nonatomic,copy) NSString * downloadPhase;                               //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (assign,nonatomic) float downloadProgress;                               //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * downloadIdentifiers;                          //@synthesize downloadIdentifiers=_downloadIdentifiers - In the implementation block
@property (nonatomic,copy) SKUIStoreIdentifier * storeIdentifier;                  //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long libraryContentFlags;               //@synthesize libraryContentFlags=_libraryContentFlags - In the implementation block
@property (assign,nonatomic) long long mediaCategory;                              //@synthesize mediaCategory=_mediaCategory - In the implementation block
@property (assign,nonatomic) unsigned long long state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * variantIdentifier;                           //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
-(NSNumber *)itemIdentifier;
-(SKUIStoreIdentifier *)storeIdentifier;
-(void)setState:(unsigned long long)arg1 ;
-(void)setStoreIdentifier:(SKUIStoreIdentifier *)arg1 ;
-(NSString *)variantIdentifier;
-(void)setVariantIdentifier:(NSString *)arg1 ;
-(unsigned long long)state;
-(NSString *)downloadPhase;
-(id)description;
-(void)setDownloadProgress:(float)arg1 ;
-(float)downloadProgress;
-(NSArray *)downloadIdentifiers;
-(void)setDownloadIdentifiers:(NSArray *)arg1 ;
-(void)setDownloadPhase:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(unsigned long long)downloadContentFlags;
-(unsigned long long)libraryContentFlags;
-(BOOL)activeStateIsPreview;
-(unsigned long long)allContentFlags;
-(void)setDownloadContentFlags:(unsigned long long)arg1 ;
-(void)setLibraryContentFlags:(unsigned long long)arg1 ;
-(long long)mediaCategory;
-(void)setMediaCategory:(long long)arg1 ;
@end
