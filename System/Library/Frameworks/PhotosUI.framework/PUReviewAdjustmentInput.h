/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSData, NSURL;

@interface PUReviewAdjustmentInput : NSObject {

	UIImage* _currentPreviewImage;
	NSData* _knownAdjustmentData;
	long long _adjustmentBaseVersion;
	NSURL* _baseImageFileURL;
	NSURL* _baseVideoFileURL;

}

@property (setter=_setCurrentPreviewImage:,nonatomic,retain) UIImage * currentPreviewImage;              //@synthesize currentPreviewImage=_currentPreviewImage - In the implementation block
@property (setter=_setKnownAdjustmentData:,nonatomic,retain) NSData * knownAdjustmentData;               //@synthesize knownAdjustmentData=_knownAdjustmentData - In the implementation block
@property (assign,setter=_setBaseImageVersion:,nonatomic) long long adjustmentBaseVersion;               //@synthesize adjustmentBaseVersion=_adjustmentBaseVersion - In the implementation block
@property (assign,setter=_setBaseImageFileURL:,nonatomic) NSURL * baseImageFileURL;                      //@synthesize baseImageFileURL=_baseImageFileURL - In the implementation block
@property (assign,setter=_setBaseVideoFileURL:,nonatomic) NSURL * baseVideoFileURL;                      //@synthesize baseVideoFileURL=_baseVideoFileURL - In the implementation block
-(void)_setCurrentPreviewImage:(id)arg1 ;
-(void)_setKnownAdjustmentData:(id)arg1 ;
-(void)_setBaseImageVersion:(long long)arg1 ;
-(void)_setBaseImageFileURL:(id)arg1 ;
-(void)_setBaseVideoFileURL:(id)arg1 ;
-(UIImage *)currentPreviewImage;
-(long long)adjustmentBaseVersion;
-(NSURL *)baseVideoFileURL;
-(NSURL *)baseImageFileURL;
-(NSData *)knownAdjustmentData;
@end
