/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell {

	BOOL _currentlyLoading;
	BOOL _mapViewSetup;
	EKEventMapDetailItem* _detailItem;

}

@property (assign,nonatomic,__weak) EKEventMapDetailItem * detailItem;              //@synthesize detailItem=_detailItem - In the implementation block
@property (assign,nonatomic) BOOL currentlyLoading;                                 //@synthesize currentlyLoading=_currentlyLoading - In the implementation block
@property (assign,nonatomic) BOOL mapViewSetup;                                     //@synthesize mapViewSetup=_mapViewSetup - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(EKEventMapDetailItem *)detailItem;
-(void)setDetailItem:(EKEventMapDetailItem *)arg1 ;
-(BOOL)currentlyLoading;
-(void)setCurrentlyLoading:(BOOL)arg1 ;
-(BOOL)mapViewSetup;
-(void)setMapViewSetup:(BOOL)arg1 ;
@end

