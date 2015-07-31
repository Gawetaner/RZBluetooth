//
//  RZBSimulatedCallback.h
//  UMTSDK
//
//  Created by Brian King on 7/31/15.
//  Copyright (c) 2015 Raizlabs. All rights reserved.
//

#import <CoreBluetooth/CoreBluetooth.h>

typedef NSData*(^RZBReadAction)(void);
typedef void(^RZBWriteAction)(NSData *data);
typedef void(^RZBNotifyAction)(BOOL isNotifying);

@interface RZBSimulatedCallback : NSObject

@property (strong, nonatomic) CBUUID *serviceUUID;
@property (strong, nonatomic) CBUUID *characteristicUUID;

@end

@interface RZBReadCallback : RZBSimulatedCallback

@property (copy, nonatomic) RZBReadAction callback;

@end


@interface RZBWriteCallback : RZBSimulatedCallback

@property (copy, nonatomic) RZBWriteAction callback;

@end


@interface RZBNotifyCallback : RZBSimulatedCallback

@property (copy, nonatomic) RZBNotifyAction callback;

@end