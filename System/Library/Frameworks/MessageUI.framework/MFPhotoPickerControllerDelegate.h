/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFPhotoPickerControllerDelegate <NSObject>
@optional
-(void)photoPickerDidCancelSystemImagePicker:(id)arg1;
-(void)photoPicker:(id)arg1 didDeselectAssetWithIdentifier:(id)arg2;
-(id)presentingViewControllerForPhotoPicker:(id)arg1;
-(void)photoPickerDidCancel:(id)arg1;

@required
-(void)photoPicker:(id)arg1 didSelectAssetWithIdentifier:(id)arg2 mediaInfo:(id)arg3;

@end
