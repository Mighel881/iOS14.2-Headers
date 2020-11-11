/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell {

	BOOL _active;
	NTKEditOption* _editOption;

}

@property (nonatomic,readonly) NTKEditOption * editOption;              //@synthesize editOption=_editOption - In the implementation block
@property (assign,nonatomic) BOOL active;                               //@synthesize active=_active - In the implementation block
+(id)reuseIdentifier;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(double)rowHeight;
-(id)initWithEditOption:(id)arg1 ;
-(NTKEditOption *)editOption;
@end
