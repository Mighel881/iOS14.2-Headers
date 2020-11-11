/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridCell.h>

@class UILabel;

@interface PUCurationTragicFailureInHighlightsGridDebugViewCell : PUPhotosGridCell {

	UILabel* _visibleLabel;
	UILabel* _utilityTypesLabel;
	unsigned long long _utilityTypes;

}

@property (assign,nonatomic) unsigned long long utilityTypes;              //@synthesize utilityTypes=_utilityTypes - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)utilityTypes;
-(void)setUtilityTypes:(unsigned long long)arg1 ;
@end
