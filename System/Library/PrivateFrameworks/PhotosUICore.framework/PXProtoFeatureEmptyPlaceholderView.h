/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXProtoFeaturePlaceholderView.h>

@class UILabel;

@interface PXProtoFeatureEmptyPlaceholderView : PXProtoFeaturePlaceholderView {

	UILabel* _label;

}
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)wantsContentView;
-(void)statusDescriptionDidChange;
-(void)_updateLabelText;
@end
