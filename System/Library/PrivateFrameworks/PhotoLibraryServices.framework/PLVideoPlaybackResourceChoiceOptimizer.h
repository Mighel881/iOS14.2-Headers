/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PLVideoPlaybackResourceChoiceOptimizer : NSObject {

	NSArray* _videoResources;
	NSArray* _playableVideos;
	BOOL _masterVideoIsPresent;
	BOOL _masterVideoIsPlayable;

}

@property (nonatomic,readonly) NSArray * preferredVideoResources; 
-(id)initWithVideoResources:(id)arg1 ;
-(NSArray *)preferredVideoResources;
@end
