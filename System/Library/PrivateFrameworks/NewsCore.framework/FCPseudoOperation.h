/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationIdentifying.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCPseudoOperation : NSObject <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelBlock;
	NSString* _shortOperationDescription;
	NSString* _longOperationDescription;
	/*^block*/id _priorityBlock;

}

@property (nonatomic,copy) id cancelBlock;                                    //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) NSString * shortOperationDescription;              //@synthesize shortOperationDescription=_shortOperationDescription - In the implementation block
@property (nonatomic,copy) NSString * longOperationDescription;               //@synthesize longOperationDescription=_longOperationDescription - In the implementation block
@property (nonatomic,copy) id priorityBlock;                                  //@synthesize priorityBlock=_priorityBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;                      //@synthesize relativePriority=_relativePriority - In the implementation block
-(void)setRelativePriority:(long long)arg1 ;
-(id)init;
-(id)initWithCancelBlock:(/*^block*/id)arg1 priorityBlock:(/*^block*/id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 ;
-(id)initWithCancelBlock:(/*^block*/id)arg1 priorityBlock:(/*^block*/id)arg2 ;
-(void)setShortOperationDescription:(NSString *)arg1 ;
-(id)priorityBlock;
-(void)setPriorityBlock:(id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(void)setLongOperationDescription:(NSString *)arg1 ;
-(long long)relativePriority;
-(void)cancel;
-(NSString *)longOperationDescription;
-(id)cancelBlock;
-(NSString *)shortOperationDescription;
@end
