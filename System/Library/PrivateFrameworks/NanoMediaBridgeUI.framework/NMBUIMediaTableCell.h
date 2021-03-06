/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaBridgeUI/NanoMediaBridgeUI-Structs.h>
#import <Preferences/PSSwitchTableCell.h>

@class UIStackView, NMBUIDownloadProgressView, UIButton;

@interface NMBUIMediaTableCell : PSSwitchTableCell {

	UIStackView* _accessoryStackView;
	NMBUIDownloadProgressView* _downloadProgressView;
	UIButton* _errorButton;

}
+(double)defaultCellHeight;
+(CGSize)artworkSize;
+(long long)cellStyle;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDownloadState:(unsigned long long)arg1 progress:(double)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDownloadState:(unsigned long long)arg1 progress:(double)arg2 animated:(BOOL)arg3 ;
-(id)downloadProgressView;
-(void)prepareForReuse;
@end

