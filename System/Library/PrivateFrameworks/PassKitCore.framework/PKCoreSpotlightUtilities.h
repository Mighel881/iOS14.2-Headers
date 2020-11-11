/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKCoreSpotlightUtilities : NSObject
+(id)spotlightIdentifierForTransactionIdentifier:(id)arg1 ;
+(id)spotlightIdentifierForPassUniqueIdentifier:(id)arg1 ;
+(void)searchableItemForTransaction:(id)arg1 passUniqueIdentifier:(id)arg2 regions:(id)arg3 tags:(id)arg4 keywords:(id)arg5 imageGenerator:(id)arg6 contactResolver:(id)arg7 completion:(/*^block*/id)arg8 ;
+(void)searchableItemForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
+(CGSize)_thumbnailImageSizeForSourceImageSize:(CGSize)arg1 ;
+(id)passUniqueIdentifierFromSpotlightIdentifier:(id)arg1 ;
+(id)transactionIdentifierFromSpotlightIdentifier:(id)arg1 ;
@end
