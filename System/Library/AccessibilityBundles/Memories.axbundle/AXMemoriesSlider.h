/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/Memories.axbundle/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement {

	long long _sliderType;
	NSString* _selectedDescription;

}

@property (assign,nonatomic) long long sliderType;                        //@synthesize sliderType=_sliderType - In the implementation block
@property (nonatomic,retain) NSString * selectedDescription;              //@synthesize selectedDescription=_selectedDescription - In the implementation block
-(id)accessibilityLabel;
-(id)_accessibilityUserTestingElementBaseType;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrame;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityValue;
-(long long)sliderType;
-(NSString *)selectedDescription;
-(id)_axContainingCollectionView;
-(long long)_axContainingSelectedItem;
-(void)setSelectedDescription:(NSString *)arg1 ;
-(void)setSliderType:(long long)arg1 ;
@end
