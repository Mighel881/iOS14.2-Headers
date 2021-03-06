/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NewsFeed.FormatImageRequest : NSObject <TSProcessedImageRequestType> {

	 size;
	 scale;
	 style;
	 inventory;
	 focalFrame;
	 renderingMode;
	 traitCollection;
	 assetHandles;
	 assetHandle;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSDictionary *)assetHandles;
-(id)init;
-(NSString *)cacheIdentifier;
@end

