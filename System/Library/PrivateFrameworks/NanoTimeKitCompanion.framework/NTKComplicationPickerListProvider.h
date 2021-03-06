/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDiffableDataSourceSnapshot;


@protocol NTKComplicationPickerListProvider <NSObject>
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * pickerListDataSourceSnapshot; 
@property (nonatomic,readonly) id<NTKComplicationItem> pickerSelectedItem; 
@property (nonatomic,readonly) BOOL pickerListProviderSlotIsRich; 
@required
-(BOOL)pickerListProviderSlotIsRich;
-(void)addListProviderListener:(id)arg1;
-(void)removeListProviderListener:(id)arg1;
-(NSDiffableDataSourceSnapshot *)pickerListDataSourceSnapshot;
-(id<NTKComplicationItem>)pickerSelectedItem;

@end

