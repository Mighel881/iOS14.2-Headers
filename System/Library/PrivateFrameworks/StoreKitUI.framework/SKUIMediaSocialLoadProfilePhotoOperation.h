/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, SKUIMediaSocialProfile;

@interface SKUIMediaSocialLoadProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIMediaSocialProfile* _profile;

}

@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)main;
-(id)outputBlock;
-(id)_silhouette;
-(void)_returnPhoto:(id)arg1 isFinal:(BOOL)arg2 ;
-(void)_fetchProfile;
-(void)_fetchMonogram;
-(void)_fetchPhoto;
@end
