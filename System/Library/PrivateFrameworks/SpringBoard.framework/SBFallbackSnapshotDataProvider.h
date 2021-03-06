/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class FBSceneSnapshot, SBSnapshotDataProviderContext, UIImage, IOSurface, XBSnapshotDataProviderContext, NSString;

@interface SBFallbackSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {

	FBSceneSnapshot* _snapshot;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;
	UIImage* _cachedImage;
	IOSurface* _processedSurface;

}

@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2 ;
-(XBSnapshotDataProviderContext *)context;
-(void)_invalidateSnapshotData;
-(id)IOSurfaceForFormat:(long long)arg1 ;
-(id)fetchImageForFormat:(long long)arg1 ;
@end

