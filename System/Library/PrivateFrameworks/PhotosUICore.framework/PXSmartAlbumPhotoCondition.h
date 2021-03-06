/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition {

	NSArray* _photoTypeValues;

}

@property (nonatomic,readonly) NSArray * photoTypeValues; 
@property (nonatomic,retain) PXLabeledValue * photoTypeValue; 
+(id)defaultSingleQueryForEditingContext:(id)arg1 ;
-(NSArray *)photoTypeValues;
-(PXLabeledValue *)photoTypeValue;
-(void)setPhotoTypeValue:(PXLabeledValue *)arg1 ;
@end

