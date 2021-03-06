/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCForYouBridgedFeedGroup.h>

@class NSString, NSArray, NSSet;

@interface NewsUI2.ForYouMagazineFeedGroup : NSObject <FCForYouBridgedFeedGroup> {

	 identifier;
	 headlines;
	 assetHandles;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSArray * headlines; 
@property (readonly,nonatomic) NSArray * assetHandles; 
@property (readonly,nonatomic) NSSet * equivalentTopicIDs; 
@property (readonly,nonatomic) NSArray * webEmbedURLs; 
@property (readonly,nonatomic) id<FCTagProviding> backingTag; 
-(NSArray *)headlines;
-(NSArray *)assetHandles;
-(id)init;
-(id<FCTagProviding>)backingTag;
-(NSArray *)webEmbedURLs;
-(NSString *)identifier;
-(NSSet *)equivalentTopicIDs;
@end

