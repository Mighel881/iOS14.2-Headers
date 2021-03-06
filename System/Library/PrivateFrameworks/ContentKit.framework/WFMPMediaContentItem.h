/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class MPMediaItem, NSString;

@interface WFMPMediaContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic,readonly) MPMediaItem * mediaItem; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) NSString * albumTitle; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
+(BOOL)isAvailableOnPlatform:(long long)arg1 ;
-(id)assetURL;
-(NSString *)albumTitle;
-(NSString *)title;
-(NSString *)artist;
-(MPMediaItem *)mediaItem;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(id)preferredFileType;
@end

