/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNUINavigationListStyle;
@class NSNumber;

@interface CNUINavigationListViewCellHeightEstimator : NSObject {

	id<CNUINavigationListStyle> _navigationListStyle;
	NSNumber* _estimatedCellHeightNumber;
	NSNumber* _estimatedDetailCellHeightNumber;

}

@property (nonatomic,retain) id<CNUINavigationListStyle> navigationListStyle;              //@synthesize navigationListStyle=_navigationListStyle - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedCellHeightNumber;                         //@synthesize estimatedCellHeightNumber=_estimatedCellHeightNumber - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedDetailCellHeightNumber;                   //@synthesize estimatedDetailCellHeightNumber=_estimatedDetailCellHeightNumber - In the implementation block
@property (nonatomic,readonly) double estimatedCellHeight; 
@property (nonatomic,readonly) double estimatedDetailCellHeight; 
-(id)initWithNavigationListStyle:(id)arg1 ;
-(double)estimatedCellHeight;
-(double)estimatedDetailCellHeight;
-(NSNumber *)estimatedCellHeightNumber;
-(void)setEstimatedCellHeightNumber:(NSNumber *)arg1 ;
-(NSNumber *)estimatedDetailCellHeightNumber;
-(void)setEstimatedDetailCellHeightNumber:(NSNumber *)arg1 ;
-(void)setNavigationListStyle:(id<CNUINavigationListStyle>)arg1 ;
-(id<CNUINavigationListStyle>)navigationListStyle;
@end

